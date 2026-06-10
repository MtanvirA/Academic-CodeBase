package service;

import java.io.File;
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.List;

import exception.InvalidInputException;
import exception.StudentNotFoundException;
import exception.TransactionNotFoundException;
import model.Admin;
import model.Cashier;
import model.FeeTransaction;
import model.Student;
import util.ReceiptGenerator;
import util.TextReceiptGenerator;

public class EnrollmentSystem {

    private ArrayList<Student> students;
    private ArrayList<FeeTransaction> transactions;

    private ReceiptGenerator generator;

    public EnrollmentSystem() {
        students = new ArrayList<>();
        transactions = new ArrayList<>();

        generator = new TextReceiptGenerator();
        seedDemoStudents();
    }

    private void seedDemoStudents() {
        students.add(new Student("2302010", "Samin", "1234", "samin@gmail.com", 2, 3.92, "CSE"));
        students.add(new Student("2302025", "Kabir", "1234", "kabir@gmail.com", 2, 3.65, "CSE"));
        students.add(new Student("2302029", "Najmul", "1234", "najmul@gmail.com", 2, 2.75, "CSE"));
        students.add(new Student("2302047", "Bosu", "1234", "bosu@gmail.com", 2, 3.30, "CSE"));
        students.add(new Student("2302052", "Azam", "1234", "azam@gmail.com", 2, 3.20, "CSE"));
        students.add(new Student("2302053", "Nafi", "1234", "nafi@gmail.com", 2, 3.00, "CSE"));
        students.add(new Student("2302054", "Arif", "1234", "arif@gmail.com", 2, 2.83, "CSE"));
        students.add(new Student("2302062", "Fahad", "1234", "fahad@gmail.com", 2, 3.63, "CSE"));
        students.add(new Student("2302065", "Mahadi", "1234", "mahadi@gmail.com", 2, 2.95, "CSE"));
        students.add(new Student("2302071", "Toha", "1234", "toha@gmail.com", 2, 3.10, "CSE"));
    }

    public void addStudent(Student s) {
        students.add(s);
        System.out.println("Student added: " + s.getName());
    }

    public void removeStudent(String id) throws StudentNotFoundException {
        Student s = findStudentById(id);
        students.remove(s);
        System.out.println("Student removed: " + s.getName());
    }

    public Student findStudentById(String id) throws StudentNotFoundException {
        for (Student s : students) {
            if (s.getId().equals(id))
                return s;
        }
        throw new StudentNotFoundException("Student with ID " + id + " not found.");
    }

    public void viewAllStudents() {
        if (students.isEmpty()) {
            System.out.println("No students registered.");
            return;
        }

        System.out.println("\n----- STUDENT LIST -----");
        for (Student s : students) {
            System.out.println(s);
        }
        System.out.println("------------------------");
    }

    public FeeTransaction submitFee(Student student, int semester)
            throws InvalidInputException {

        if (semester <= 0)
            throw new InvalidInputException("Semester must be positive.");

        FeeTransaction tx = student.paySemesterFee(semester);

        transactions.add(tx);

        System.out.println("Payment request created. Status: PENDING");
        System.out.println("Transaction ID: " + tx.getTransactionId());

        try {
            generator.generateReceipt(student, tx);
            System.out.println("Receipt generated: " + tx.getReceiptPath());
        } catch (Exception e) {
            System.out.println("Error generating receipt: " + e.getMessage());
        }

        return tx;
    }

    public void approveTransaction(String txId, Cashier cashier)
            throws TransactionNotFoundException {

        FeeTransaction tx = findTransactionById(txId);
        tx.approve(cashier.getId());

        System.out.println("Transaction approved successfully.");

        try {
            Student s = findStudentById(tx.getStudentId());
            generator.generateReceipt(s, tx);
            System.out.println("Updated receipt generated: " + tx.getReceiptPath());
        } catch (Exception e) {
            System.out.println("Error generating receipt after approval.");
        }
    }

    public FeeTransaction findTransactionById(String txId)
            throws TransactionNotFoundException {

        for (FeeTransaction t : transactions) {
            if (t.getTransactionId().equals(txId))
                return t;
        }
        throw new TransactionNotFoundException("Transaction ID " + txId + " not found.");
    }

    public List<FeeTransaction> getPendingTransactions() {
        List<FeeTransaction> pending = new ArrayList<>();
        for (FeeTransaction t : transactions) {
            if (t.getStatus().equals("PENDING"))
                pending.add(t);
        }
        return pending;
    }

    public void generateBulkReport(Admin admin) {
        try {
            File folder = new File("reports");
            if (!folder.exists())
                folder.mkdirs();

            String fileName = "reports/students_report.txt";

            FileWriter writer = new FileWriter(fileName);

            writer.write("========== PSTU STUDENT PAYMENT REPORT ==========\n");

            for (Student s : students) {
                writer.write(s.toString() + "\n");
            }

            writer.write("\nGenerated by Admin: " + admin.getName());
            writer.close();

            System.out.println("Report generated: " + fileName);

        } catch (Exception e) {
            System.out.println("Error generating report: " + e.getMessage());
        }
    }

    public void exportCSV(Admin admin) {
        try {
            File folder = new File("exports");
            if (!folder.exists())
                folder.mkdirs();

            String fileName = "exports/students.csv";
            FileWriter writer = new FileWriter(fileName);

            writer.write("ID,Name,Faculty,Semester,CGPA\n");

            for (Student s : students) {
                writer.write(s.getId() + "," +
                        s.getName() + "," +
                        s.getFaculty() + "," +
                        s.getSemester() + "," +
                        s.getCgpa() + "\n");
            }

            writer.close();
            System.out.println("CSV exported: " + fileName);

        } catch (Exception e) {
            System.out.println("Error exporting CSV: " + e.getMessage());
        }
    }
}
