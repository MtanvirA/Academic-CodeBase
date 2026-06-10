package service;

import java.util.ArrayList;
import java.util.List;

import exception.AuthException;
import exception.StudentNotFoundException;
import model.Admin;
import model.Cashier;
import model.Student;

public class AuthService {

    private EnrollmentSystem system;
    private List<Admin> admins;
    private List<Cashier> cashiers;

    public AuthService(EnrollmentSystem system) {
        this.system = system;
        this.admins = new ArrayList<>();
        this.cashiers = new ArrayList<>();

        seedDemoAccounts();
    }

    private void seedDemoAccounts() {
        Admin demoAdmin = new Admin("ADMIN", "Super Admin", "admin123", "admin@pstu.edu");
        admins.add(demoAdmin);

        Cashier demoCashier = new Cashier("CASH", "Main Cashier", "cash123", "cashier@bank.pstu");
        cashiers.add(demoCashier);
    }

    public void addAdmin(Admin a) {
        admins.add(a);
    }

    public void addCashier(Cashier c) {
        cashiers.add(c);
    }

    public Student loginStudent(String id, String pin) throws AuthException {
        try {
            Student s = system.findStudentById(id);
            if (s.getPin() != null && s.getPin().equals(pin)) {
                return s;
            } else {
                throw new AuthException("Invalid PIN for student ID: " + id);
            }
        } catch (StudentNotFoundException e) {
            throw new AuthException("Student not found for ID: " + id);
        }
    }

    public Cashier loginCashier(String id, String password) throws AuthException {
        for (Cashier c : cashiers) {
            if (c.getId().equals(id) && c.getPassword().equals(password)) {
                return c;
            }
        }
        throw new AuthException("Invalid cashier credentials.");
    }

    public Admin loginAdmin(String id, String password) throws AuthException {
        for (Admin a : admins) {
            if (a.getId().equals(id) && a.getPassword().equals(password)) {
                return a;
            }
        }
        throw new AuthException("Invalid admin credentials.");
    }

    public List<Admin> getAdmins() {
        return admins;
    }

    public List<Cashier> getCashiers() {
        return cashiers;
    }
}
