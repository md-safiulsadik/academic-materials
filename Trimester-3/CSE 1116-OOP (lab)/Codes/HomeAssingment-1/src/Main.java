import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        Student[] students = new Student[3];

        for (int i = 0; i < 3; i++) {
            System.out.println("--------Student "+ (i + 1) + "---------");

            System.out.print("Enter Student ID: ");
            int id = Integer.parseInt(input.nextLine());
            System.out.print("Enter Student Name: ");
            String name = input.nextLine();
            System.out.println("Enter Student Marks: ");
            int[] marks = new int[3];
            for (int j = 0; j < 3; j++) {
                System.out.print("Mark " + (j + 1) + ":");
                marks[j] = Integer.parseInt(input.nextLine());
            }
              students[i] = new Student(id, name, marks);
        }


        System.out.println("Student details: ");
        for (Student student : students) {
            System.out.println(student);
        }
    }
}