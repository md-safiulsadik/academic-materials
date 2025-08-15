import java.util.Arrays;

public class Student {
    String name;
    int id;
    float cgpa;
    int[]marks = new int[3];

    Student(String name,int id, float cgpa, int[] marks){
        this.name = name;
        this.id = id;
        this.cgpa = cgpa;
        //this.marks = marks;
        for(int i=0;i<3;i++){
            this.marks[i]=marks[i];
        }
    }

    @Override
    public String toString() {
        return "Student{" +
                "name='" + name + '\'' +
                ", id=" + id +
                ", cgpa=" + cgpa +
                ", marks=" + Arrays.toString(marks) +
                '}';
    }
}
