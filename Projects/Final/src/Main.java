import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        EnrollmentSystem system = new EnrollmentSystem();

        Admin admin = new Admin("ADMIN", "Super Admin", "admin123", "admin@pstu.edu");

        System.out.println("===========================================");
        System.out.println("     PSTU | University Enrollment System    ");
        System.out.println("===========================================\n");

        while (true) {
            System.out.println("\n===== LOGIN MENU =====");
            System.out.println("1. Student Login");
            System.out.println("2. Admin Login");
            System.out.println("3. Exit");
            System.out.print("Select option: ");

            int choice = safeInt(sc);

            switch (choice) {

                case 1:
                    handleStudentLogin(sc, system);
                    break;

                case 2:
                    handleAdminLogin(sc, system, admin);
                    break;

                case 3:
                    System.out.println("Exiting program...");
                    sc.close();
                    return;

                default:
                    System.out.println("Invalid option. Try again.");
            }
        }
    }

    private static void handleStudentLogin(Scanner sc, EnrollmentSystem system) {

        System.out.print("\nEnter Student ID: ");
        String id = sc.nextLine();

        System.out.print("Enter PIN: ");
        String pin = sc.nextLine();

        Student s = system.findStudentById(id);

        if (s == null || !s.getPin().equals(pin)) {
            System.out.println("Login failed: invalid ID or PIN.");
            return;
        }

        System.out.println("\nWelcome, " + s.getName());

        while (true) {
            s.showMenu();
            System.out.print("Enter option: ");
            int option = safeInt(sc);

            switch (option) {

                case 1:
                    s.viewProfile();
                    break;

                case 2:
                    s.viewPaymentStatus();
                    break;

                case 3:
                    s.payFee();
                    break;

                case 4:
                    System.out.println("Logged out.");
                    return;

                default:
                    System.out.println("Invalid option.");
            }
        }
    }

    private static void handleAdminLogin(Scanner sc, EnrollmentSystem system, Admin admin) {

        System.out.print("\nEnter Admin ID: ");
        String id = sc.nextLine();

        System.out.print("Enter Password: ");
        String pass = sc.nextLine();

        if (!admin.getId().equals(id) || !admin.getPassword().equals(pass)) {
            System.out.println("Login failed: invalid admin credentials.");
            return;
        }

        System.out.println("\nWelcome Admin: " + admin.getName());

        while (true) {
            admin.showMenu();
            System.out.print("Enter option: ");
            int option = safeInt(sc);

            switch (option) {

                case 1:
                    addStudentUI(sc, system);
                    break;

                case 2:
                    system.viewAllStudents();
                    break;

                case 3:
                    System.out.println("Logged out.");
                    return;

                default:
                    System.out.println("Invalid option.");
            }
        }
    }

    private static void addStudentUI(Scanner sc, EnrollmentSystem system) {

        System.out.print("Enter Student ID: ");
        String id = sc.nextLine();

        System.out.print("Enter Name: ");
        String name = sc.nextLine();

        System.out.print("Enter Email: ");
        String email = sc.nextLine();

        System.out.print("Enter PIN: ");
        String pin = sc.nextLine();

        System.out.print("Enter Semester: ");
        int semester = safeInt(sc);

        System.out.print("Enter CGPA (0 if first sem): ");
        double cgpa = safeDouble(sc);

        System.out.print("Enter Faculty (CSE/NFS/LLA/BA/FA): ");
        String faculty = sc.nextLine().toUpperCase();

        Student s = new Student(id, name, pin, email, semester, cgpa, faculty);
        system.addStudent(s);

        System.out.println("Student registered successfully!");
    }

    private static int safeInt(Scanner sc) {
        while (true) {
            try {
                String s = sc.nextLine();
                return Integer.parseInt(s.trim());
            } catch (Exception e) {
                System.out.print("Enter a valid number: ");
            }
        }
    }

    private static double safeDouble(Scanner sc) {
        while (true) {
            try {
                String s = sc.nextLine();
                return Double.parseDouble(s.trim());
            } catch (Exception e) {
                System.out.print("Enter a valid number: ");
            }
        }
    }
}
