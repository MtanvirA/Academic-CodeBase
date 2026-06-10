package model;

public class Cashier extends User {

    public Cashier(String id, String name, String password, String email) {
        super(id, name, password, email);
    }

    @Override
    public void showMenu() {
        System.out.println("\n------ CASHIER MENU ------");
        System.out.println("1. View Pending Transactions");
        System.out.println("2. Approve Transaction");
        System.out.println("3. Generate Receipt for Transaction");
        System.out.println("4. Logout");
        System.out.println("---------------------------");
    }

    @Override
    public String toString() {
        return "Cashier: " + id + " | " + name;
    }
}
