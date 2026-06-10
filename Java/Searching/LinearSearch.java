public class LinearSearch {
    public static void main(String[] args) {
        int[] numbers = { 24, 28, 7, 6, 8, 6, 32, 15, 25, 64 };

        int target = 15;

        int result = LinearSearch(numbers, target);

        if(result == -1){
            System.out.println("Element is not present in the array!");
        }
        else{
            System.out.println("The element is present in the array and it's position is: " + result);
        }
        
    }

    public static int LinearSearch(int [] numbers, int target){
        
        int check = 0;
        int pos = 0;
        for(int i = 0; i< numbers.length; i++){
            if(numbers[i] == target){
                check = 1;
                pos = i + 1;
            }
        }

        if (check == 1){
            return pos;
        }
        else {
            return -1;
        }

        
    }
}
