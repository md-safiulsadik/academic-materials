import java.util.Scanner;

public class ClassProblem {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        System.out.println(isEven(n) ? "Even" : "Odd");
    }

    public static boolean isEven(int num) {
        return num % 2 == 0;
    }
}
