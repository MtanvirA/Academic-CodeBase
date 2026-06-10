package model;

import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.util.UUID;

public class FeeTransaction {
    private String transactionId;
    private String studentId;
    private int semester;
    private double amount;
    private LocalDateTime timestamp;
    private String status;
    private String approvedBy;
    private String receiptPath;

    public FeeTransaction(String studentId, int semester, double amount) {
        this.transactionId = generateTransactionId();
        this.studentId = studentId;
        this.semester = semester;
        this.amount = amount;
        this.timestamp = LocalDateTime.now();
        this.status = "PENDING";
        this.approvedBy = "";
        this.receiptPath = "";
    }

    private String generateTransactionId() {
        String datePart = LocalDateTime.now().format(DateTimeFormatter.ofPattern("yyyyMMddHHmmss"));
        String shortUuid = UUID.randomUUID().toString().split("-")[0];
        return "TX-" + datePart + "-" + shortUuid;
    }

    public void approve(String approverId) {
        this.status = "APPROVED";
        this.approvedBy = approverId;
    }

    public void reject(String approverId) {
        this.status = "REJECTED";
        this.approvedBy = approverId;
    }

    public String getTransactionId() {
        return transactionId;
    }

    public String getStudentId() {
        return studentId;
    }

    public int getSemester() {
        return semester;
    }

    public double getAmount() {
        return amount;
    }

    public LocalDateTime getTimestamp() {
        return timestamp;
    }

    public String getStatus() {
        return status;
    }

    public String getApprovedBy() {
        return approvedBy;
    }

    public String getReceiptPath() {
        return receiptPath;
    }

    public void setReceiptPath(String receiptPath) {
        this.receiptPath = receiptPath;
    }

    @Override
    public String toString() {
        String ts = timestamp.format(DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss"));
        return String.format("TXID: %s | Student: %s | Sem: %d | Amount: %.2f | Status: %s | Time: %s",
                transactionId, studentId, semester, amount, status, ts);
    }
}
