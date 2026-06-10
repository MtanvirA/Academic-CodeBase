import java.util.*;

public class First {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for (int i = 1; i <= n; i++) {
            ArrayList<Integer> boro = new ArrayList<>();
            int a, b;
            a = input.nextInt();
            b = input.nextInt();

            for (int j = 0; j < a; j++) {
                boro.add(input.nextInt());
            }

            int num;
            for (int j = 0; j < b; j++) {
                for (int k = 0; k < 3; k++) {
                    num = input.nextInt();
                    int check = 1;
                    for (int bor : boro) {
                        if (bor == num) {
                            check = 0;
                        }
                    }
                    if (check == 1) {
                        boro.add(num);
                    }
                }
                System.out.println(boro.size());
            

            }

        }
    }
}