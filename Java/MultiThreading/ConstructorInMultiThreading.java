class Learning extends Thread{

    public Learning(String nam) {
        super(nam);
    }
    
    public void run(){
        System.out.println("Hi gal!");
    }

}

public class ConstructorInMultiThreading {
    public static void main(String[] args) {
        Learning l = new Learning("Tanvir");
        l.start();
        System.out.println("The name of the Thread is: " + l.getName());

    }
}
