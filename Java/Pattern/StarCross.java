import java.util.Scanner;

public class StarCross {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter any odd number: ");
        int r = input.nextInt();

        for (int i = 1; i <= r; i++) {
            for (int j = 1; j <= r; j++) {
                if (i == j || (i + j) == (r + 1)) {
                    System.out.print("* ");
                } else {
                    System.out.print("  ");
                }

            }
            System.out.println();
        }
    }
}
