import java.util.*;

public class G {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int m = Integer.parseInt(input.nextLine());

        for (int i = 0; i < m; i++) {
            String str = input.nextLine();

            int sizeof = str.length() + 1;   // +1 for the implicit null character in C
            int strlen = str.indexOf("\\");  // index of backslash = where \0 starts

            if (strlen == -1) {
                strlen = str.length();
            }

            System.out.println(sizeof + " " + strlen);
        }
    }
}
