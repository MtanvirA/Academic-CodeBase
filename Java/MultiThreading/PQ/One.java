import java.util.*;

class MyThread implements Runnable{
    public void run(){
        String name = Thread.currentThread().getName();
        System.out.println(name);
    }
}


public class One {
    public static void main(String[] args) {
        MyThread obj = new MyThread();

        Thread t1 = new Thread(obj,"Thread-A");
        Thread t2 = new Thread(obj, "Thread-B");

        t1.start();
        t2.start();

    }  
}
