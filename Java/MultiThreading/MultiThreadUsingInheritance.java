class Programming extends Thread{
    public void run(){
        for(int i = 1; i<=50; i++){
            System.out.println("I am learning Java!");
        }
    }
}

class Teaching extends Thread{
    public void run(){
        for(int i = 1; i<=50; i++){
            System.out.println("Tory is taught Python by me.");
        }
    }
}

public class MultiThreadUsingInheritance {
    public static void main(String[] args) {
        System.out.println("HI");
        Programming p = new Programming();
        Teaching t = new Teaching();
        
        p.start();
        t.start();
    }
}
