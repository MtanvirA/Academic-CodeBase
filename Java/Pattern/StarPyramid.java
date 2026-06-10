import java.util.Scanner;

public class StarPyramid {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter the number of rows: ");

        int r = input.nextInt();
        int nst = 1;
        
        for(int i = 1; i<=r ; i++){
            for(int j = 1; j<= r-i; j++){
                System.out.print("  ");
            }
            for(int j = 1; j<= nst; j++){
                System.out.print("* ");
            }
            nst += 2;

            System.out.println();
        }
    }
}
