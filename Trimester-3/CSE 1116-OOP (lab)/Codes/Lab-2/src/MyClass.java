import java.util.Scanner;

public class MyClass {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        char ch;
        String str;

        // --> So the .next() takes only one word
        // --> The nextLine() takes whole sentences
//        ch = scanner.next().charAt(0);
//        System.out.println(ch);

        /*
         - Sir, did some bok bok about inputting character
         -
         */


        String data = scanner.nextLine();

        if (data.contains(" ")) {
            System.out.println("Yo yo ! ");
        } else {
            System.out.println("NO space");
        }

        // Something about upper and lower case conversion

    }
}
