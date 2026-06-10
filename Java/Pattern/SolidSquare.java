import java.util.Scanner;

public class SolidSquare {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter the number of row and column: ");
        int r = input.nextInt();

        for(int i = 1; i<= r; i++){
            for(int j=1; j<= r; j++){
                System.out.print("* ");

            }
            System.out.println();
        }
        
    }
}
