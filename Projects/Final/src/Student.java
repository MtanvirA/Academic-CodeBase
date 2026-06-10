public class Student extends User {

    private int semester;
    private double cgpa;
    private String faculty;

    private final double feeBase = 3500.0;
    private boolean feePaid;
    private double lastPaidAmount;

    private String pin;

    public Student(String id, String name, String pin, String email,
                   int semester, double cgpa, String faculty) {
        super(id, name, pin, email);

        this.semester = semester;
        this.cgpa = cgpa;
        this.faculty = faculty;
        this.pin = pin;
        this.feePaid = false;
        this.lastPaidAmount = 0.0;
    }

    public int getSemester() {
        return semester;
    }

    public double getCgpa() {
        return cgpa;
    }

    public String getFaculty() {
        return faculty;
    }

    public String getPin() {
        return pin;
    }

    public boolean isFeePaid() {
        return feePaid;
    }

    public double getLastPaidAmount() {
        return lastPaidAmount;
    }

    public double calculateFee() {
        if (semester == 1) {
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

    public void payFee() {
        if (feePaid) {
            System.out.println("Fees already paid for this semester.");
            return;
        }
        double amount = calculateFee();
        lastPaidAmount = amount;
        feePaid = true;
        System.out.println("Payment successful. Amount paid: " + amount + " TK");
    }

    public void viewProfile() {
        System.out.println("\n----- STUDENT PROFILE -----");
        System.out.println("Name      : " + name);
        System.out.println("ID        : " + id);
        System.out.println("Email     : " + email);
        System.out.println("Faculty   : " + faculty);
        System.out.println("Semester  : " + semester);
        System.out.println("CGPA      : " + cgpa);
        System.out.println("----------------------------");
    }

    public void viewPaymentStatus() {
        System.out.println("\n----- PAYMENT STATUS -----");
        if (feePaid) {
            System.out.println("Status : PAID");
            System.out.println("Amount : " + lastPaidAmount + " TK");
        } else {
            System.out.println("Status : DUE");
        }
        System.out.println("--------------------------");
    }

    @Override
    public void showMenu() {
        System.out.println("\n------ STUDENT MENU ------");
        System.out.println("1. View Profile");
        System.out.println("2. View Payment Status");
        System.out.println("3. Pay Semester Fees");
        System.out.println("4. Logout");
        System.out.println("---------------------------");
    }

    @Override
    public String toString() {
        return id + " | " + name + " | Semester " + semester + " | Faculty: " + faculty;
    }
}
