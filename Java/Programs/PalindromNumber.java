
import java.util.Scanner;

public class PalindromNumber {
    public static void main(String[] args) {
        System.out.println("Enter the number: ");
        Scanner input = new Scanner(System.in);

        int num = input.nextInt();

        int rev = 0;

        int number = num;

        while(num>0){
            rev = rev*10 + num%10;
            num /= 10;

        }

        if(rev == number){
            System.out.println("The number is Palindrom!");
        }
        else
        {
            System.out.println("The number is not Palindrom!");
        }
    }    
}
