public class Student1 extends Student {
    float cgpa;
    void printStudent1(){
        System.out.println("Name: "+super.name+" Id: "+super.id+" CGPA: "+this.cgpa);
    }
}
