package model;

import java.util.HashMap;
import java.util.Map;

public class Student extends User {
    private int semester;
    private double cgpa;
    private String faculty;
    private final double feeBase = 3500.0;

    private Map<Integer, FeeTransaction> transactions;

    private String pin;

    public Student(String id, String name, String pin, String email,
            int semester, double cgpa, String faculty) {

        super(id, name, pin, email);

        this.semester = semester;
        this.cgpa = cgpa;
        this.faculty = faculty;
        this.transactions = new HashMap<>();
        this.pin = pin;
    }

    public int getSemester() {
        return semester;
    }

    public void setSemester(int semester) {
        this.semester = semester;
    }

    public double getCgpa() {
        return cgpa;
    }

    public void setCgpa(double cgpa) {
        this.cgpa = cgpa;
    }

    public String getFaculty() {
        return faculty;
    }

    public void setFaculty(String faculty) {
        this.faculty = faculty;
    }

    public Map<Integer, FeeTransaction> getTransactions() {
        return transactions;
    }

    public String getPin() {
        return pin;
    }

    public double calculateFee(int sem) {
        if (sem == 1) {
            return feeBase;
        }

        if (cgpa > 3.75) {
            return feeBase * 0.70;
        } else if (cgpa > 3.5) {
            return feeBase * 0.90;
        } else {
            return feeBase;
        }
    }

    public FeeTransaction paySemesterFee(int sem) {

        if (transactions.containsKey(sem)) {
            return transactions.get(sem);
        }

        double amount = calculateFee(sem);

        FeeTransaction tx = new FeeTransaction(this.id, sem, amount);

        transactions.put(sem, tx);

        return tx;
    }

    public void viewProfile() {
        System.out.println("\n----- STUDENT PROFILE -----");
        System.out.println("Name      : " + name);
        System.out.println("ID        : " + id);
        System.out.println("Email     : " + email);
        System.out.println("Faculty   : " + faculty);
        System.out.println("Semester  : " + semester);
        System.out.println("CGPA      : " + cgpa);
        System.out.println("-----------------------------");
    }

    public void viewPaymentStatus() {
        System.out.println("\n----- PAYMENT STATUS -----");

        if (transactions.containsKey(semester)) {
            FeeTransaction t = transactions.get(semester);
            System.out.println("Semester " + semester + " : " + t.getStatus());
            System.out.println("Amount   : " + t.getAmount());
        } else {
            System.out.println("Semester " + semester + " : DUE (Not Paid)");
        }

        System.out.println("---------------------------");
    }

    public void viewPaymentHistory() {
        System.out.println("\n----- PAYMENT HISTORY -----");

        if (transactions.isEmpty()) {
            System.out.println("No payments made yet.");
        } else {
            for (FeeTransaction t : transactions.values()) {
                System.out.println(t);
            }
        }
        System.out.println("---------------------------");
    }

    @Override
    public void showMenu() {
        System.out.println("\n------ STUDENT MENU ------");
        System.out.println("1. View Profile");
        System.out.println("2. View Payment Status");
        System.out.println("3. Pay Semester Fees");
        System.out.println("4. View Payment History");
        System.out.println("5. Logout");
        System.out.println("---------------------------");
    }

    @Override
    public String toString() {
        return id + " | " + name + " | Semester " + semester + " | Faculty: " + faculty;
    }
}
