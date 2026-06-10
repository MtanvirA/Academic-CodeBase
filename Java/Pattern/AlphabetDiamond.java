import java.util.Scanner;

public class AlphabetDiamond {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter the number of rows: ");

        int r = input.nextInt();

        int m = r;

        int nst = 1;
        for (int i = 1; i <= m; i++) {
            int num = 65;
            for (int j = 1; j <= m - i; j++) {
                System.out.print("  ");
            }
            for (int j = 1; j <= i; j++) {
                char ch = (char) num;
                System.out.print(ch + " ");
                num++;
            }

            if (i >= 2) {
                int num1 = num - 2;
                for (int j = i - 1; j > 0; j--) {
                    char ch = (char) num1;
                    System.out.print(ch + " ");
                    num1--;
                }
            }
            System.out.println();
        }

        int r1 = r - 1;

        for (int i = 1; i <= r1; i++) {
            int num3 = 65;
            for (int j = 1; j <= i; j++) {
                System.out.print("  ");
            }
            for (int j = r1 + 1 - i; j >= 1; j--) {
                char ch = (char) num3;
                System.out.print(ch + " ");
                num3++;
            }

            int num4 = num3-2;
            for(int j=r1-i; j>=1; j-- ){
                char ch = (char) num4;
                System.out.print(ch + " ");
                num4--;
            }

            System.out.println();

        }
    }
}
