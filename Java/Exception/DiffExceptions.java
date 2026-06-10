import java.util.Scanner;
public class DiffExceptions {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter the array index that you want to view: ");
        int n = input.nextInt();
        System.out.println("Enter the number that you want to divide with: ");
        int num = input.nextInt();

        int [] arr = new int[5];
        arr[0] = 8;
        arr[1] = 12;
        arr[2] = 2;
        arr[3] = 44;
        arr[4] = 24;

        try {
            System.out.println("The array element in the index is: " + arr[n]);
            System.out.println("The divided integer result is: " + arr[n]/num);

        } 
        catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("The following exception occured: " + e);
        }
        catch (ArithmeticException e) {
            System.out.println("The following exception occured: " + e);
        }
        catch (Exception e)
        {
            System.out.println("The exception was: " + e);
        }

        System.out.println("End of the program!");
    }
}
