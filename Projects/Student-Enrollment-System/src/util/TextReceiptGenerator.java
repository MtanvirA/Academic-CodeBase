package util;

import java.io.File;
import java.io.FileWriter;
import java.time.format.DateTimeFormatter;

import model.FeeTransaction;
import model.Student;

public class TextReceiptGenerator implements ReceiptGenerator {

    @Override
    public void generateReceipt(Student student, FeeTransaction tx) throws Exception {

        File folder = new File("receipts");
        if (!folder.exists()) folder.mkdirs();

        String fileName = "receipts/" + tx.getTransactionId() + ".txt";

        FileWriter writer = new FileWriter(fileName);

        writer.write("========== PSTU FEE PAYMENT RECEIPT ==========\n");
        writer.write("Transaction ID : " + tx.getTransactionId() + "\n");
        writer.write("Student ID     : " + student.getId() + "\n");
        writer.write("Name           : " + student.getName() + "\n");
        writer.write("Faculty        : " + student.getFaculty() + "\n");
        writer.write("Semester       : " + tx.getSemester() + "\n");
        writer.write("Amount Paid    : " + tx.getAmount() + " TK\n");
        writer.write("Status         : " + tx.getStatus() + "\n");
        writer.write("Approved By    : " + tx.getApprovedBy() + "\n");
        writer.write("Date & Time    : " + 
            tx.getTimestamp().format(DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss")) 
        + "\n");
        writer.write("==============================================\n");
        writer.write("Thank you for using the PSTU Enrollment System\n");

        writer.close();

        tx.setReceiptPath(fileName);
    }
}
