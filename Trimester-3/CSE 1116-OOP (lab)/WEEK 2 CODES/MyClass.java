import javax.swing.plaf.synth.SynthOptionPaneUI;
import java.util.Scanner;

public class MyClass {
    public static void main(String[] args) {
        String data;
        char ch;
        Scanner in = new Scanner(System.in);
        System.out.println("data?");
        data = in.nextLine();
        System.out.println("ch?");
        ch = in.next().charAt(0);
        System.out.println("Data is: "+data+", ch: "+ch);

        for(int i=0;i<data.length();i++){
            if(data.charAt(i)== ' '){
                System.out.println("Hi");
            }
        }
        System.out.println(data.toUpperCase());
        System.out.println("the data is: "+data);
        System.out.println(data.toLowerCase());
        data = data.toLowerCase();
        System.out.println("the data is: "+data);
    }
}
