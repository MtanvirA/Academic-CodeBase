import java.util.*;

public class BinarySearch {
    public static void main(String[] args) {
        int[] numbers = { 24, 28, 7, 6, 8, 6, 32, 15, 25, 64 };

        Arrays.sort(numbers);
        for (int number : numbers) {
            System.out.print(number + " ");

        }
        System.out.println();
        int target = 15;

        int result = BinarySearch(numbers, target);

        if (result == -1) {
            System.out.println("Element is not present in the array!");
        } else {
            System.out.println("The element is present in the array and it's position is: " + result);
        }

    }

    public static int BinarySearch(int[] numbers, int target) {
        int high = numbers.length - 1;
        int low = 0;

        while (low <= high) {
            int mid = (high + low) / 2;
            if (target == numbers[mid]) {
                return mid;
            } else if (target < numbers[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return -1;
    }

}
