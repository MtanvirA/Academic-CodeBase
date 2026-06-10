import java.util.Scanner;

public class AlphabetPyramidMast {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter the number of rows: ");

        int r = input.nextInt();

        for (int i = 1; i <= r; i++) {
            int num = 65;
            for (int j = 1; j <= r - i; j++) {
                System.out.print("  ");
            }

            for (int j = 1; j <= i; j++) {
                char ch = (char) num;
                System.out.print(ch + " ");
                num++;
            }

            if (i > 1) {
                int k = i - 1;
                int num1 = k+64;
                for (int j = 1; j <= k; j++) {
                    char ch1 = (char) num1;
                    System.out.print(ch1 + " ");
                    num1--;
                }
            }

            System.out.println();

        }
    }
}
