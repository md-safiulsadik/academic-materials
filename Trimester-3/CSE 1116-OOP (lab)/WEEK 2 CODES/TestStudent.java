import java.sql.SQLOutput;
import java.util.Scanner;

public class TestStudent {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Student st = new Student(101,3.5f,"Abir");
        st.getData();
        System.out.println("updated marks: "+st.assignMarks(98.5f));
        Student st1 = new Student(102,3.86f,"Karim");
        st1.getData();
       /* st.id = 101;
        st.cgpa = 3.8f;
        st.name = "Abir";
        st.getData();

        Student st1 = new Student();
        System.out.print("id?");
        st1.id = scanner.nextInt();
        System.out.print("CGPA?");
        st1.cgpa = scanner.nextFloat();
        System.out.print("Name?");
        scanner.nextLine();
        st1.name = scanner.nextLine();

        st1.getData(); */
    }
}
