import java.util.Scanner;

public class AlphaNumericTriangle {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter the number of rows: ");
        int r = input.nextInt();

        for (int i = 1; i <= r; i++) {
            int num = 65;

            for (int j = 1; j <= i; j++) {
                if (i % 2 != 0) {
                    System.out.print(j + " ");
                } else {
                    char ch = (char) num;
                    System.out.print(ch + " ");
                    num++;
                }
            }
            System.out.println();
        }
    }
}
