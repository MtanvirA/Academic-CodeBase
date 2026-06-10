class SleepExample extends Thread {
    public void run() {
        for (int i = 1; i <= 3; i++) {
            System.out.println(Thread.currentThread().getName() + " : " + i);
            try {
                Thread.sleep(500); // 0.5 second pause
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}

public class Five {
    public static void main(String[] args) {
        SleepExample t1 = new SleepExample();
        SleepExample t2 = new SleepExample();

        t1.setName("Alpha");
        t2.setName("Beta");

        t1.start();
        t2.start();
    }
}
