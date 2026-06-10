import java.util.Scanner;

public class ZeroAndTriangle {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter any odd number: ");
        int r = input.nextInt();

        int num = 1;

        for (int i = 1; i <= r; i++) {
            if (i % 2 != 0) {
                num = 1;
            } else {
                num = 0;
            }
            for (int j = 1; j <= i; j++) {
                System.out.print(num + " ");
                if (num == 0) {
                    num = 1;
                } else {
                    num = 0;
                }

            }
            System.out.println();
        }
    }
}
