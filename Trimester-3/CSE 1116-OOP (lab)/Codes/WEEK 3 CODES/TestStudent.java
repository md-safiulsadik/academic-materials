import java.util.Scanner;

public class TestStudent {
    public static void main(String[] args) {
        /*If there's no constructor*/
        /* Student st = new Student();
        st.name = "Abir";
        st.id = 101;
        st.cgpa = 3.54f;
        st.marks = new int[]{80,89,90};
        System.out.println(st.toString()); */

        /*For parameterized constructor*/
        /* Student st1 = new Student("Xavier",102,3.55f,new int[]{80,89,90});
        System.out.println(st1.toString()); */

        /*User input with parameterized constructor*/
        String tempName;
        int tempId;
        float tempCgpa;
        int[] tempMarks = new int[3];
        Scanner sc = new Scanner(System.in);
        System.out.print("name: ");
        tempName = sc.nextLine();
        System.out.print("ID: ");
        tempId = sc.nextInt();
        System.out.print("CGPA: ");
        tempCgpa = sc.nextFloat();

        for(int i=0;i<3;i++){
            System.out.println("data "+(i+1));
            tempMarks[i] = sc.nextInt();
        }

        Student st2 = new Student(tempName,tempId,tempCgpa,tempMarks);
        System.out.println(st2.toString());

    }
}
