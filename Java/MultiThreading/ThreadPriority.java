class Computing extends Thread {
    public Computing(String name) {
        super(name);
    }

    public void run() {
        for (int i = 1; i <= 100; i++) {
            System.out.println("I am computing the thread and this is: " + this.getName());
        }
    }
}

public class ThreadPriority {
    public static void main(String[] args) {
        Computing c1 = new Computing("Taher");
        Computing c2 = new Computing("Kalpona");
        Computing c3 = new Computing("Tanvir");
        Computing c4 = new Computing("Tory");

        c1.setPriority(Thread.MAX_PRIORITY);
        c2.setPriority(Thread.MIN_PRIORITY);
        c3.setPriority(Thread.NORM_PRIORITY);
        c4.setPriority(Thread.MIN_PRIORITY);

        c1.start();
        c2.start();
        c3.start();
        c4.start();
    }
}
