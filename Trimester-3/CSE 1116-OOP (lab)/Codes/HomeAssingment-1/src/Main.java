import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("--------Student 1---------");

        System.out.print("Enter Student ID: ");
        int id1 = Integer.valueOf(input.nextLine());
        System.out.print("Enter Student Name: ");
        String name1 = input.nextLine();
        System.out.print("Enter Student Marks: ");
        int[] marks1 = new int[3];
        for (int i = 0; i < 3; i++) {
            marks1[i] = Integer.valueOf(input.nextLine());
        }
        Student student1 = new Student(id1, name1, marks1);


        System.out.println("--------Student 2---------");

        System.out.print("Enter Student ID: ");
        int id2 = Integer.valueOf(input.nextLine());
        System.out.print("Enter Student Name: ");
        String name2 = input.nextLine();
        System.out.print("Enter Student Marks: ");
        int[] marks2 = new int[3];
        for (int i = 0; i < 3; i++) {
            marks2[i] = Integer.valueOf(input.nextLine());
        }
        Student student2 = new Student(id2, name2, marks2);


        System.out.println("--------Student 3---------");

        System.out.print("Enter Student ID: ");
        int id3 = Integer.valueOf(input.nextLine());
        System.out.print("Enter Student Name: ");
        String name3 = input.nextLine();
        System.out.print("Enter Student Marks: ");
        int[] marks3 = new int[3];
        for (int i = 0; i < 3; i++) {
            marks3[i] = Integer.valueOf(input.nextLine());
        }
        Student student3 = new Student(id3, name3, marks3);

        System.out.println("Student details: ");
        student1.printDetails();
        student2.printDetails();
        student3.printDetails();
    }
 }