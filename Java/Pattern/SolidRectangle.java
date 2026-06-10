import java.util.Scanner;

public class SolidRectangle {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter the number of rows: ");
        int r = input.nextInt();

        System.out.println("Enter the number of columns: ");
        int c = input.nextInt();

        for(int i = 1; i<= r; i++){
            for(int j = 1; j<= c; j++){
                System.out.print("* ");
            }
            System.out.println("");
        }
    }
}
