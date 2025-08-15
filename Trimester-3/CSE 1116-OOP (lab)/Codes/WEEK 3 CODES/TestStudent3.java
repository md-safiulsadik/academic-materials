import java.util.ArrayList;

public class TestStudent3 {
    public static void main(String[] args) {
        ArrayList<Student> s = new ArrayList<>();
        Student st1 = new Student("A",101,3.5f,new int[]{10,20,30});
        s.add(st1);
        Student st2 = new Student("B",102,3.55f,new int[]{50,20,30});
        s.add(st2);

        for(Student khalid:s){
            System.out.println(khalid);
        }
        s.remove(0);
        System.out.println("After:");
        for(Student khalid:s){
            System.out.println(khalid);
        }
    }
}
