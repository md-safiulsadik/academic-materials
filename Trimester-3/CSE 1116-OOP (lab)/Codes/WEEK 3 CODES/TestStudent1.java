import java.util.Scanner;

public class TestStudent1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Student[] st = new Student[3];
        for(int i=0;i<3;i++){
            String tempName;
            int tempId;
            float tempCgpa;
            int[] tempMarks = new int[3];
            System.out.println("Enter student "+(i+1)+" Information:");
            System.out.print("name: ");
            tempName = sc.nextLine();
            System.out.print("ID: ");
            tempId = sc.nextInt();
            System.out.print("CGPA: ");
            tempCgpa = sc.nextFloat();

            for(int j=0;j<3;j++){
                System.out.print("marks "+(j+1)+":");
                tempMarks[j] = sc.nextInt();
            }

            st[i] = new Student(tempName,tempId,tempCgpa,tempMarks);
            sc.nextLine();
        }

        for(Student x:st){
            System.out.println(x);
        }
    }
}
