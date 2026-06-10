import java.util.*;

class MessageThread implements Runnable {
    private String message;

    public MessageThread(String msg) {
        this.message = msg;
    }

    public void run() {
        while (true) {
            System.out.println(message);
            try {
                Thread.sleep(1000); // 1 second delay
            } catch (InterruptedException e) {
                System.out.println("Thread interrupted");
                break;
            }
        }
    }
}

public class Four {
    public static void main(String[] args) {
        MessageThread mt1 = new MessageThread("Good Morning");
        MessageThread mt2 = new MessageThread("Welcome");

        Thread t1 = new Thread(mt1);
        Thread t2 = new Thread(mt2);

        t1.start();
        t2.start();
    }
}
