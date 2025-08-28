public class TestStudent {
    public static void main(String[] args) {
        Student student = new Student();
        student.id = 101;
        student.name = "Abir";
        student.printStudent();

        Student1 student1 = new Student1();
        student1.cgpa = 3.56f;
        student1.id = 105;
        student1.name = "Karim";
        student1.printStudent1();
        student1.printStudent();
    }
}
