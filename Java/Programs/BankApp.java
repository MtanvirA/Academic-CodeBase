import java.util.*;

class Account {
    private String name;
    private int accNo;
    private double balance;

    public Account(String name, int accNo, double balance) {
        this.name = name;
        this.accNo = accNo;
        this.balance = balance > 0 ? balance : 100; // balance can’t be zero/negative
    }

    public int getAccNo() {
        return accNo;
    }

    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println("Deposited: " + amount + " | New Balance: " + balance);
        } else {
            System.out.println("Invalid deposit amount!");
        }
    }

    public void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            System.out.println("Withdrawn: " + amount + " | New Balance: " + balance);
        } else {
            System.out.println("Insufficient balance or invalid amount!");
        }
    }

    public void display() {
        System.out.println("Account No: " + accNo + " | Name: " + name + " | Balance: " + balance);
    }
}

class Bank {
    private ArrayList<Account> accounts = new ArrayList<>();

    public void addAccount(Account acc) {
        accounts.add(acc);
        System.out.println("Account added successfully!");
    }

    public Account findAccount(int accNo) {
        for (Account acc : accounts)
            if (acc.getAccNo() == accNo)
                return acc;
        return null;
    }

    public void removeAccount(int accNo) {
        Account acc = findAccount(accNo);
        if (acc != null) {
            accounts.remove(acc);
            System.out.println("Account removed successfully!");
        } else {
            System.out.println("Account not found!");
        }
    }
}

public class BankApp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Bank bank = new Bank();
        int choice;

        do {
            System.out.println("\n=== ATM MENU ===");
            System.out.println("1. Add Account");
            System.out.println("2. Deposit");
            System.out.println("3. Withdraw");
            System.out.println("4. Remove Account");
            System.out.println("5. View Account");
            System.out.println("6. Exit");
            System.out.print("Enter choice: ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter Name: ");
                    String name = sc.next();
                    System.out.print("Enter Account No: ");
                    int no = sc.nextInt();
                    System.out.print("Enter Initial Balance: ");
                    double bal = sc.nextDouble();
                    bank.addAccount(new Account(name, no, bal));
                    break;

                case 2:
                    System.out.print("Enter Account No: ");
                    no = sc.nextInt();
                    Account dep = bank.findAccount(no);
                    if (dep != null) {
                        System.out.print("Enter Amount: ");
                        dep.deposit(sc.nextDouble());
                    } else System.out.println("Account not found!");
                    break;

                case 3:
                    System.out.print("Enter Account No: ");
                    no = sc.nextInt();
                    Account w = bank.findAccount(no);
                    if (w != null) {
                        System.out.print("Enter Amount: ");
                        w.withdraw(sc.nextDouble());
                    } else System.out.println("Account not found!");
                    break;

                case 4:
                    System.out.print("Enter Account No: ");
                    bank.removeAccount(sc.nextInt());
                    break;

                case 5:
                    System.out.print("Enter Account No: ");
                    Account acc = bank.findAccount(sc.nextInt());
                    if (acc != null) acc.display();
                    else System.out.println("Account not found!");
                    break;

                case 6:
                    System.out.println("Thank you for using our ATM!");
                    break;

                default:
                    System.out.println("Invalid choice!");
            }
        } while (choice != 6);
        sc.close();
    }
}
