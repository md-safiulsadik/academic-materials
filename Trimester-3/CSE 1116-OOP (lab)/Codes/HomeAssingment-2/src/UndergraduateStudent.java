
public class UndergraduateStudent extends Student {

    public UndergraduateStudent(int roll, String name, String dept) {
        super(roll, name, dept);
    }

    @Override
    public void participate() {
        System.out.println("Student participates in clubs.");
    }
}
