class Eating implements Runnable {
    public void run() {
        for (int i = 1; i <= 50; i++) {
            System.out.println("I am eating");
        }
    }
}

class Watching implements Runnable {
    public void run() {
        for (int i = 1; i <= 50; i++) {
            System.out.println("I am watching YouTube while eating.");
        }
    }
}

public class RunableInterface {
    public static void main(String[] args) {
        Eating e = new Eating();
        Watching w = new Watching();

        Thread eThread = new Thread(e);
        Thread wThread = new Thread(w);

        eThread.start();
        wThread.start();
    }
}
