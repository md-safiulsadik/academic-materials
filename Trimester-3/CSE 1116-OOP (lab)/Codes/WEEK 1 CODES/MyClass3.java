import java.util.Scanner;

public class MyClass3 {
    public static void main(String[] args) {
        int x,y;
        String str;
        Scanner input = new Scanner(System.in);

        System.out.println("Enter x:");
        x = input.nextInt();
        System.out.println("Enter y:");
        y = input.nextInt();

        input.nextLine();
        System.out.println("Enter Name:");
        str = input.nextLine();

        System.out.println("x is "+x+", y is "+y+", name is: "+str);
       // System.out.printf("x is %d, y is %d, name is: %s",x,y,str);
        System.out.println(str.charAt(0));
        System.out.println(str.charAt(4));
       // System.out.println("Size is: "+str.length());
        System.out.println(str.charAt(str.length()-1));
    }
}
