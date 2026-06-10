import java.util.Scanner;

class LowBalance extends Exception {
    public LowBalance(String message) {
        super(message);
    }
}

class CheckBalance {
    double amount;

    public CheckBalance(double amount) {
        this.amount = amount;
    }

    public String check() throws LowBalance {
        if (amount <= 100) {
            throw new LowBalance("You balance is too low to continue!");
        }

        return "Your balance is okay!";
    }
}

public class Bank {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        System.out.println("Enter your balance: ");
        double num = input.nextDouble();

        CheckBalance c = new CheckBalance(num);

        try {
            System.out.println(c.check());
        } catch (Exception e) {
            System.out.println("Exception found: " + e.getMessage());
        }

    }
}
