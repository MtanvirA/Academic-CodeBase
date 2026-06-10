public class SelectionSort {
    public static void main(String[] args) {
        int[] numbers = { 24, 28, 7, 6, 8, 6, 32, 15, 25, 64 };

        SelectionSort(numbers);

        for(int number: numbers){
            System.out.print(number + " ");
        }
        System.out.println();
    }    

    public static void SelectionSort(int [] arr){

        for(int i = 0; i < arr.length-1; i++){
            int minindex = i;

            for(int j = i+1; j < arr.length; j++){
                if(arr[minindex] > arr[j]){
                    minindex = j;
                }
            }

            int temp = arr[i];
            arr[i] = arr[minindex];
            arr[minindex] = temp;

        }
    }
}
