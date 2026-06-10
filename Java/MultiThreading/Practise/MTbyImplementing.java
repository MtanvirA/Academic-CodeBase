
import java.util.Scanner;

class Drinking implements Runnable{
    int n;

    public Drinking(int n){
        this.n = n;
    }

    public void run(){
        try {
            for(int i=1; i<= n; i++){
                if(i%2==0) System.out.println("Fuck Anika");
                else System.out.println("Fuck Sristy");
            }
        } catch (Exception e) {
            System.out.println("Exception occured: " + e);
        }
    }
}

public class MTbyImplementing {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int num = input.nextInt();

        Drinking d = new Drinking(num);

        Thread t = new Thread(d);
        
        t.start();

        
    }
}
