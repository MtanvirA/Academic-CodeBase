import java.util.Scanner;
import javax.sound.sampled.SourceDataLine;

public class NumberPyramidMast {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter the number of rows: ");

        int r = input.nextInt();

        for (int i = 1; i <= r; i++) {
            int num = 1;
            for (int j = 1; j <= r - i; j++) {
                System.out.print("  ");
            }

            for (int j = 1; j <= i; j++) {
                System.out.print(num + " ");
                num++;
            }

            if (i > 1) {
                int k = i-1;
                int num1 = k;
                for(int j = 1; j<=k; j++){
                    System.out.print( num1 +" ");
                    num1--;
                }
            }

            System.out.println();

        }
    }
}
