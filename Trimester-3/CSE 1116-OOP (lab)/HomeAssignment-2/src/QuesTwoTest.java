
public class QuesTwoTest {

    public static void main(String[] args) {
        Student student = new Student(13, "Mokbul", "CSE");
        GraduateStudent graduateStudent = new GraduateStudent(43, "Zokbul", "BSCSE");
        UndergraduateStudent undergraduateStudent = new UndergraduateStudent(113, "Rokbul", "BBA");

        int[] marks = new int[]{43, 54, 56, 78, 89, 89};
        int mark = 55;

        System.out.println(student.calculateGrade(mark));
        System.out.println(student.calculateGrade(marks));

        System.out.println(undergraduateStudent.calculateGrade(mark));
        System.out.println(graduateStudent.calculateGrade(mark));

        undergraduateStudent.participate();
        graduateStudent.participate();
        student.participate();
    }
}
