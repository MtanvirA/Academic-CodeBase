import java.util.Scanner;

public class AlphabetPyramid {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter the number of rows: ");

        int r = input.nextInt();
        int nst = 1;

        for (int i = 1; i <= r; i++) {
            int num = 65;
            for (int j = 1; j <= r - i; j++) {
                System.out.print("  ");
            }
            for (int j = 1; j <= nst; j++) {
                char ch = (char) num;
                System.out.print(ch + " ");
                num++;
            }
            nst += 2;

            System.out.println();
        }
    }
}
