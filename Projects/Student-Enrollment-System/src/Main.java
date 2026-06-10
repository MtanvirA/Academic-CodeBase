import java.util.*;

import exception.AuthException;
import exception.InvalidInputException;
import exception.StudentNotFoundException;
import exception.TransactionNotFoundException;

import model.Admin;
import model.Cashier;
import model.FeeTransaction;
import model.Student;

import service.AuthService;
import service.EnrollmentSystem;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        EnrollmentSystem system = new EnrollmentSystem();
        AuthService auth = new AuthService(system);

        System.out.println("===========================================");
        System.out.println("     PSTU | University Enrollment System    ");
        System.out.println("===========================================\n");

        while (true) {
            System.out.println("\n===== LOGIN MENU =====");
            System.out.println("1. Student Login");
            System.out.println("2. Cashier Login");
            System.out.println("3. Admin Login");
            System.out.println("4. Exit");
            System.out.print("Select option: ");

            int choice = safeInt(sc);

            switch (choice) {

                case 1:
                    handleStudentLogin(sc, auth, system);
                    break;

                case 2:
                    handleCashierLogin(sc, auth, system);
                    break;

                case 3:
                    handleAdminLogin(sc, auth, system);
                    break;

                case 4:
                    System.out.println("Exiting program...");
                    sc.close();
                    return;

                default:
                    System.out.println("Invalid option. Try again.");
            }
        }
    }

    private static void handleStudentLogin(Scanner sc, AuthService auth, EnrollmentSystem system) {
        try {
            System.out.print("\nEnter Student ID: ");
            String id = sc.nextLine();

            System.out.print("Enter PIN: ");
            String pin = sc.nextLine();

            Student s = auth.loginStudent(id, pin);
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
                        System.out.print("Enter semester to pay: ");
                        int sem = safeInt(sc);

                        try {
                            FeeTransaction tx = system.submitFee(s, sem);
                            System.out.println("Transaction submitted: " + tx.getTransactionId());
                        } catch (InvalidInputException e) {
                            System.out.println("Error: " + e.getMessage());
                        }
                        break;

                    case 4:
                        s.viewPaymentHistory();
                        break;

                    case 5:
                        System.out.println("Logged out.");
                        return;

                    default:
                        System.out.println("Invalid option.");
                }
            }

        } catch (AuthException e) {
            System.out.println("Login failed: " + e.getMessage());
        }
    }

    private static void handleCashierLogin(Scanner sc, AuthService auth, EnrollmentSystem system) {

        try {
            System.out.print("\nEnter Cashier ID: ");
            String id = sc.nextLine();

            System.out.print("Enter Password: ");
            String pass = sc.nextLine();

            Cashier c = auth.loginCashier(id, pass);

            System.out.println("\nWelcome Cashier: " + c.getName());

            while (true) {
                c.showMenu();
                System.out.print("Enter option: ");
                int option = safeInt(sc);

                switch (option) {

                    case 1:
                        List<FeeTransaction> pending = system.getPendingTransactions();
                        if (pending.isEmpty()) {
                            System.out.println("No pending requests.");
                        } else {
                            System.out.println("\n----- Pending Payments -----");
                            for (FeeTransaction t : pending) {
                                System.out.println(t);
                            }
                        }
                        break;

                    case 2:
                        System.out.print("Enter Transaction ID to approve: ");
                        String txid = sc.nextLine();

                        try {
                            system.approveTransaction(txid, c);
                        } catch (TransactionNotFoundException e) {
                            System.out.println(e.getMessage());
                        }
                        break;

                    case 3:
                        System.out.print("Enter Transaction ID: ");
                        String tid = sc.nextLine();

                        try {
                            FeeTransaction tx = system.findTransactionById(tid);
                            Student ss = system.findStudentById(tx.getStudentId());
                            system.submitFee(ss, tx.getSemester()); // regenerate
                        } catch (Exception e) {
                            System.out.println("Error: " + e.getMessage());
                        }
                        break;

                    case 4:
                        System.out.println("Logged out.");
                        return;

                    default:
                        System.out.println("Invalid option.");
                }
            }

        } catch (AuthException e) {
            System.out.println("Login failed: " + e.getMessage());
        }
    }

    private static void handleAdminLogin(Scanner sc, AuthService auth, EnrollmentSystem system) {
        try {
            System.out.print("\nEnter Admin ID: ");
            String id = sc.nextLine();

            System.out.print("Enter Password: ");
            String pass = sc.nextLine();

            Admin a = auth.loginAdmin(id, pass);

            System.out.println("\nWelcome Admin: " + a.getName());

            while (true) {
                a.showMenu();
                System.out.print("Enter option: ");
                int option = safeInt(sc);

                switch (option) {

                    case 1:
                        addStudentUI(sc, system);
                        break;

                    case 2:
                        System.out.print("Enter Student ID to remove: ");
                        String sid = sc.nextLine();
                        try {
                            system.removeStudent(sid);
                        } catch (StudentNotFoundException e) {
                            System.out.println(e.getMessage());
                        }
                        break;

                    case 3:
                        system.viewAllStudents();
                        break;

                    case 4:
                        system.generateBulkReport(a);
                        break;

                    case 5:
                        system.exportCSV(a);
                        break;

                    case 6:
                        System.out.println("Logged out.");
                        return;

                    default:
                        System.out.println("Invalid option.");
                }
            }

        } catch (AuthException e) {
            System.out.println("Login failed: " + e.getMessage());
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
