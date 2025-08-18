public class Student {
    int id;
    float cgpa;
    String name;
    float marks = 0;

    Student(int id, float cgpa, String name){
        this.id = id;
        this.cgpa = cgpa;
        this.name = name;
    }

    void getData(){
        System.out.println("ID: "+this.id+", CGPA: "+this.cgpa+", Name: "+this.name+" Marks:"+this.marks);
    }

    float assignMarks(float x) {
        this.marks = this.marks+x;
        return this.marks;
    }
}
