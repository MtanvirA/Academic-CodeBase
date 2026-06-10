class MyThread extends Thread{

    public void run(){
        int sum = 0;
        for(int i = 0; i<10; i++){
            sum += i;
            System.out.println(Thread.currentThread().getName()+" - Value: " + sum);
        }
        System.out.println(Thread.currentThread().getName()+" - Sum: " + sum);
    }
}

public class Three {

    public static void main(String[] args) {
        MyThread t1 = new MyThread();
        MyThread t2 = new MyThread();
        MyThread t3 = new MyThread();

        t1.setName("Thread: A");
        t2.setName("Thread: B");
        t3.setName("Thread: C");

        t1.start();
        t2.start();
        t3.start();



    }
    
}
