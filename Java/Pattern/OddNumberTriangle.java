import java.util.Scanner;

public class OddNumberTriangle {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter the number of rows: ");
        int r = input.nextInt();

        for (int i = 1; i <= r; i++) {
            int num =1;
            for (int j = 1; j <= i; j++) {
                System.out.print(num + " ");
                num+=2;
            }
            System.out.println();
        }
    }
}
