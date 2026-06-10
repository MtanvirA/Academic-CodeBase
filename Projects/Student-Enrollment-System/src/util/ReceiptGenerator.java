package util;

import model.Student;
import model.FeeTransaction;

public interface ReceiptGenerator {
    void generateReceipt(Student student, FeeTransaction tx) throws Exception;
}
