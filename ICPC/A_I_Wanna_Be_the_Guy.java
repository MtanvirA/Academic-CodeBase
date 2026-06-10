import java.util.*;

public class A_I_Wanna_Be_the_Guy {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        ArrayList<Integer> numbers = new ArrayList<>();

        int n = input.nextInt();

        int a = input.nextInt();
        int[] arr;
        if (a > 0) {
            arr = new int[a];
            for (int i = 0; i < a; i++) {
                arr[i] = input.nextInt();
            }
            for (int i = 0; i < a; i++) {
                int check = 1;
                for (int num : numbers) {
                    if (arr[i] == num) {
                        check = 0;
                    }
                }
                if (check == 1) {
                    numbers.add(arr[i]);
                }
            }
        }

        int b = input.nextInt();
        int[] brr;
        if (b > 0) {
            brr = new int[b];
            for (int i = 0; i < b; i++) {
                brr[i] = input.nextInt();
            }

            for (int i = 0; i < b; i++) {
                int check = 1;
                for (int num : numbers) {
                    if (brr[i] == num) {
                        check = 0;
                    }
                }
                if (check == 1) {
                    numbers.add(brr[i]);
                }
            }
        }

        if (n == numbers.size()) {
            System.out.println("I become the guy.");
        } else {
            System.out.println("Oh, my keyboard!");
        }

    }
}