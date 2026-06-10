class GoodMorning implements Runnable {
    public void run() {
        while (true) {
            try {
                Thread.sleep(200);
            } catch (Exception e) {
                System.out.println(e);
            }
            System.out.println("Good Morning");
        }
    }
}

class Welcome implements Runnable {
    public void run() {
        while (true) {
            try {
                Thread.sleep(200);
            } catch (Exception e) {
                System.out.println(e);
            }
            System.out.println("Welcome to my laptop!");
        }
    }
}

public class No1 {
    public static void main(String[] args) {
        GoodMorning g = new GoodMorning();
        Welcome w = new Welcome();

        Thread gt = new Thread(g);
        Thread wt = new Thread(w);

        gt.start();
        wt.start();
    }
}
