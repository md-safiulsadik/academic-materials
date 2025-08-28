
public class Student {
    private final int roll;
    private final String name;
    private final String dept;

    public Student(int roll, String name, String dept) {
        this.name = name;
        this.roll = roll;
        this.dept = dept;
    }

    public String calculateGrade(int mark) {
        if (mark <= 100 && mark >= 90 ) return "A";
        else if (mark <= 89 && mark >= 86) return "A-";
        else if (mark <= 85 && mark >= 82) return "B+";
        else if (mark <= 81 && mark >= 78) return "B";
        else if (mark <= 77 && mark >= 74) return "B-";
        else if (mark <= 73 && mark >= 70) return "C+";
        else if (mark <= 69 && mark >= 66) return "C";
        else if (mark <= 65 && mark >= 62) return "C-";
        else if (mark <= 61 && mark >= 58) return "D+";
        else if (mark <= 57 && mark >= 55) return "D";
        else if (mark <= 54 && mark >= 0) return "F";
        else return "Invalid!";
    }

    public double calculateGrade(int[] marks) {
        double sum = 0;
        for (Integer mark : marks) {
            sum += mark;
}
        return sum / marks.length;
    }

    public void participate() {
        System.out.println("Student participates in general activities.");
    }

    public String getName() {
        return name;
    }

    public int getRoll() {
        return roll;
    }

    public String getDept() {
        return dept;
    }
}
