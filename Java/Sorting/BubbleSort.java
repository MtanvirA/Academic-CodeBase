public class BubbleSort {
    public static void main(String[] args) {
        int[] numbers = { 24, 28, 7, 6, 8, 6, 32, 15, 25, 64 };

        BubbleSort(numbers);

        for(int number: numbers){
            System.out.print(number + " ");
        }
        System.out.println();
    }

    public static void BubbleSort(int [] numbers){
        for(int i = 0; i < numbers.length-1; i++){
            for(int j=0; j < numbers.length-1-i; j++){
                if(numbers[j] > numbers[j+1])
                {
                    int swap = numbers[j];
                    numbers[j] = numbers[j+1];
                    numbers[j+1] = swap;
                }
            
            }
        }
    }
}