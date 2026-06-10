class Name extends Thread {
    public Name(String name) {
        super(name);
    }

    public void run() {
        for (int i = 1; i <= 25; i++) {
            System.out.println(Thread.currentThread().getName() + " is running.");
            try {
                Thread.sleep(200);
            } catch (Exception e) {
            }
        }
    }

}

public class ThreadName {
    public static void main(String[] args) {
        Name n1 = new Name("One");
        Name n2 = new Name("Two");

        System.out.println(n1.getName());
        System.out.println(n1.getPriority());
        System.out.println(n2.getName());
        System.out.println(n2.getPriority());

        n1.setPriority(Thread.MAX_PRIORITY);
        n2.setPriority(Thread.MIN_PRIORITY);

        System.out.println(n1.getPriority());
        System.out.println(n2.getPriority());

        n1.start();
        try{
            n1.join();
        }
        catch(Exception e){
            System.out.println(e);
        }
        n2.start();


    }
}
