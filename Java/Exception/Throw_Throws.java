class Teaching{
    public void eating(String food) throws ArithmeticException{
        if(food == "tea"){
            throw new ArithmeticException("You are not allowed to drink tea, rather have coffee");
        }
        else
        {
            System.out.println("Enjoy your meal!");
        }
    }
}

public class Throw_Throws {
    public static void main(String[] args) {
        Teaching t = new Teaching();
        try{
            t.eating("tea");
        }
        catch(ArithmeticException e){
            System.out.println("An error occured: " + e.getMessage());
        }

    }
}
