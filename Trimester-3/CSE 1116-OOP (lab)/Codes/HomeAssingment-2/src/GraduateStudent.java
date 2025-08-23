
public class GraduateStudent extends Student {

    public GraduateStudent(int roll, String name, String dept) {
        super(roll, name, dept);
    }

    @Override
    public String calculateGrade(int mark) {
        if (mark <= 100 && mark >= 90 ) return "A";
        else if (mark <= 89 && mark >= 86) return "A-";
        else if (mark <= 85 && mark >= 82) return "B+";
        else if (mark <= 81 && mark >= 78) return "B";
        else if (mark <= 77 && mark >= 74) return "B-";
        else if (mark <= 73 && mark >= 70) return "C+";
        else if (mark <= 69 && mark >= 66) return "C";
        else if (mark <= 65 && mark >= 60) return "C-";
        else if (mark <= 59 && mark >= 0) return "F";
        else return "Invalid!";
    }

    @Override
    public void participate() {
        System.out.println("Student participates in research seminars.");
    }
}
