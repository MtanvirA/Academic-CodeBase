package model;

public class Admin extends User {

    public Admin(String id, String name, String password, String email) {
        super(id, name, password, email);
    }

    @Override
    public void showMenu() {
        System.out.println("\n------ ADMIN MENU ------");
        System.out.println("1. Add Student");
        System.out.println("2. Remove Student");
        System.out.println("3. View All Students");
        System.out.println("4. Generate Bulk Payment Report (TEXT)");
        System.out.println("5. Export Student List (CSV)");
        System.out.println("6. Logout");
        System.out.println("---------------------------");
    }

    @Override
    public String toString() {
        return "Admin: " + id + " | " + name;
    }
}
