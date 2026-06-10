import java.util.ArrayList;

public class EnrollmentSystem {

    private ArrayList<Student> students;

    public EnrollmentSystem() {
        students = new ArrayList<>();
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

    public Student findStudentById(String id) {
        for (Student s : students) {
            if (s.getId().equals(id)) {
                return s;
            }
        }
        return null;
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
}
