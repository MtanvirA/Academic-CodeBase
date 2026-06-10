class Writing implements Runnable {
    public String name;

    public Writing(String name) {
        this.name = name;
    }

    public void run() {
        for (int i = 1; i <= 50; i++) {
            System.out.println("The " + name + " is running!");
            try {
                Thread.sleep(200);
            } catch (Exception e) {
                System.out.println("Exception occured: " + e);
            }
        }
    }
}

public class MultipleThread {
    public static void main(String[] args) {
        Writing w1 = new Writing("Thread One");
        Writing w2 = new Writing("Thread Two");

        Thread t1 = new Thread(w1);
        Thread t2 = new Thread(w2);

        t1.start();
        try {
            t1.join(1000);
        } catch (Exception e) {
        }
        t2.start();
    }
}
