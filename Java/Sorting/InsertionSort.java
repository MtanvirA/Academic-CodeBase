public class InsertionSort {
    public static void main(String[] args) {
        int[] numbers = { 24, 28, 7, 6, 8, 6, 32, 15, 25, 64 };

        InsertionSort(numbers);

        for (int number : numbers) {
            System.out.print(number + " ");
        }
        System.out.println();
    }

    public static void InsertionSort(int [] arr){
        for(int i = 1; i<arr.length; i++){
            int key = arr[i];
            int j = i - 1;

            while(j>=0 && arr[j] > key){
                arr[j+1] = arr[j];
                j--;
            }

            arr[j+1] = key;

        }
    }
}
