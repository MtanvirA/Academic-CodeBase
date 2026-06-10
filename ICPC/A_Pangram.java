import java.util.*;

public class A_Pangram {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        ArrayList<Character> words = new ArrayList<>();

        int n = input.nextInt();
        if (n < 26) {
            System.out.println("NO");
            return;
        } else {
            String str = input.next();
            String str1 = str.toUpperCase();
            // System.out.println(str1);
            char[] arr = str1.toCharArray();

            words.add(arr[0]);
            for (int i = 1; i < arr.length; i++) {
                int check = 1;
                for(char word: words)
                {
                    if(arr[i] == word)
                    {
                        check = 0;
                    }
                }
                if(check == 1)
                {
                    words.add(arr[i]);
                }
            }
            
            // System.out.println(words.size());
            // for(char word: words)
            // {
            //     System.out.println(word);
            // }
            if (words.size() == 26) {
                System.out.println("YES");
            }
            else
            {
                System.out.println("NO");
            }
        }
    }
}