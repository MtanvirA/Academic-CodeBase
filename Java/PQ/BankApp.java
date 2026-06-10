import java.util.*;

class Account {
    private String name;
    private int accNumber;
    private double balance;

    // Constructor
    public Account(String name, int accNumber, double balance) {
        this.name = name;
        this.accNumber = accNumber;
        if (balance > 0)
            this.balance = balance;
        else
            this.balance = 100; // minimum starting balance
    }

    // Deposit method
    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println("Deposited: " + amount);
        } else {
            System.out.println("Invalid deposit amount!");
        }
    }

    // Withdraw method
    public void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            System.out.println("Withdrawn: " + amount);
        } else {
            System.out.println("Insufficient balance or invalid amount!");
        }
    }

    // Display account details
    public void display() {
        System.out.println("Account No: " + accNumber);
        System.out.println("Name: " + name);
        System.out.println("Balance: " + balance);
    }

    // Getter for account number (used by Bank)
    public int getAccNumber() {
        return accNumber;
    }
}

class Bank {
    private ArrayList<Account> accounts = new ArrayList<>();

    // Add new account
    public void addAccount(Account acc) {
        accounts.add(acc);
        System.out.println("Account added successfully!");
    }

    // Remove account
    public void removeAccount(int accNumber) {
        for (Account acc : accounts) {
            if (acc.getAccNumber() == accNumber) {
                accounts.remove(acc);
                System.out.println("Account removed successfully!");
                return;
            }
        }
        System.out.println("Account not found!");
    }

    // Find account by number
    public Account findAccount(int accNumber) {
        for (Account acc : accounts) {
            if (acc.getAccNumber() == accNumber)
                return acc;
        }
        return null;
    }
}

public class BankApp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Bank bank = new Bank();
        int choice;

        do {
            System.out.println("\n===== ATM Menu =====");
            System.out.println("1. Add Account");
            System.out.println("2. Deposit Money");
            System.out.println("3. Withdraw Money");
            System.out.println("4. Remove Account");
            System.out.println("5. View Account");
            System.out.println("6. Exit");
            System.out.print("Enter your choice: ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter Name: ");
                    String name = sc.nextLine();
                    sc.nextLine();
                    System.out.print("Enter Account Number: ");
                    int accNo = sc.nextInt();
                    System.out.print("Enter Initial Balance: ");
                    double bal = sc.nextDouble();
                    bank.addAccount(new Account(name, accNo, bal));
                    break;

                case 2:
                    System.out.print("Enter Account Number: ");
                    accNo = sc.nextInt();
                    Account depAcc = bank.findAccount(accNo);
                    if (depAcc != null) {
                        System.out.print("Enter amount to deposit: ");
                        depAcc.deposit(sc.nextDouble());
                    } else {
                        System.out.println("Account not found!");
                    }
                    break;

                case 3:
                    System.out.print("Enter Account Number: ");
                    accNo = sc.nextInt();
                    Account witAcc = bank.findAccount(accNo);
                    if (witAcc != null) {
                        System.out.print("Enter amount to withdraw: ");
                        witAcc.withdraw(sc.nextDouble());
                    } else {
                        System.out.println("Account not found!");
                    }
                    break;

                case 4:
                    System.out.print("Enter Account Number to remove: ");
                    accNo = sc.nextInt();
                    bank.removeAccount(accNo);
                    break;

                case 5:
                    System.out.print("Enter Account Number: ");
                    accNo = sc.nextInt();
                    Account acc = bank.findAccount(accNo);
                    if (acc != null)
                        acc.display();
                    else
                        System.out.println("Account not found!");
                    break;

                case 6:
                    System.out.println("Thank you for using the ATM!");
                    break;

                default:
                    System.out.println("Invalid choice!");
            }
        } while (choice != 6);

        sc.close();
    }
}
