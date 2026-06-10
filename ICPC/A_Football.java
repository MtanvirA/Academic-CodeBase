import java.util.*;

public class A_Football {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String str1 = " ";
        String str2 = " ";
        int count1 = 0;
        int count2 = 0;

        int n = input.nextInt();

        if (n == 1) {
            str1 = input.next();
            System.out.println(str1);
            return;
        } else {
            ArrayList<String> names = new ArrayList<>();

            for (int i = 1; i <= n; i++) {
                String str = input.next();
                if (i == 1) {
                    str1 = str;
                }
                names.add(str);
            }

            for (String name : names) {
                if (name.equals(str1)) {
                    count1++;
                } else {
                    str2 = name;
                }
            }

            count2 = n - count1;
            if (count1 > count2) {
                System.out.println(str1);
            } else {
                System.out.println(str2);
            }
        }

    }
}
