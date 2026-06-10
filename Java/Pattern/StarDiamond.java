import java.util.Scanner;

public class StarDiamond {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter the odd number of rows: ");

        int r = input.nextInt();

        int m = (r + 1) / 2;

        int nst = 1;
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= m - i; j++) {
                System.out.print("  ");
            }
            for (int j = 1; j <= nst; j++) {
                System.out.print("* ");
            }
            nst += 2;
            System.out.println();
        }

        int n = r-m;

        int o = r - 2;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                System.out.print("  ");
            }
            for(int j= 1; j<= o; j++){
                System.out.print("* ");
            }
            o -= 2;
            System.out.println();
        }
        

    }
}
