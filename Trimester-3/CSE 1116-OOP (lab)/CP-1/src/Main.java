import java.sql.SQLOutput;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
//        Employee employee1 = new Employee("Hero", "44435", 10000, 3);
//        Employee employee2 = new Employee("Alom", "54435", 60000, 6);
//        Employee employee3 = new Employee("Jhon", "64435", 90000, 2);
//
//        ArrayList<Employee> employees = new ArrayList<>();
//        employees.add(employee1);
//        employees.add(employee2);
//        employees.add(employee3);
//
//        for (Employee employee : employees) {
//            System.out.println(employee.toString());
//        }
//
//        System.out.println("After raise");
//        for (Employee employee : employees) {
//            employee.increaseSalary(10);
//            System.out.println("Total earning of " + employee.getName() + ": " + employee.totalEarnings());
//        }
//
        Scanner input = new Scanner(System.in);
        Employee[] employees = new Employee[3];

        for (int i = 0; i < employees.length; i++) {
            System.out.print("Name: ");
            String name = input.nextLine();

            System.out.print("Id: ");
            String id = input.nextLine();

            System.out.print("Yearly salary: ");
            float salary = input.nextInt();
            input.nextLine();

            System.out.print("Year of Experience: ");
            float yearOfExperience = input.nextInt();
            input.nextLine();

            employees[i] = new Employee(name, id, salary, yearOfExperience);
        }

        for (Employee employee : employees) {
            System.out.println(employee.toString());
        }

        System.out.println("After raise");
        for (Employee employee : employees) {
            employee.increaseSalary(10);
            System.out.println("Total earning of " + employee.getName() + ": " + employee.totalEarnings());
        }
    }
}
