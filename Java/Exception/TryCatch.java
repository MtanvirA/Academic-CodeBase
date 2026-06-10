import java.util.Scanner;

public class TryCatch {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int num = input.nextInt();
        int result;
        try {
            result = 9699/num;
            System.out.println("The divided result is: " + result);
        } 
        catch (Exception e) {
            System.out.println("The error is: " + e);
        }

        System.out.println("End of the program!");
    }
}
