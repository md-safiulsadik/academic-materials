public class Student {
    private int id;
    private String name;
    private int[] marks;

    public Student(int id, String name, int[] marks) {
        this.id = id;
        this.name = name;
        this.marks = new int[3];
    }

    public double calculateAverage() {
        int sum = 0;
        for (int i = 0; i < this.marks.length; i++) {
            sum += this.marks[i];
        }
        return (double) sum / 3;
    }

    public void printDetails() {
        System.out.println
        ("Student ID: " + this.id + " Name: " + this.name + " Marks: " + this.marks[0] + " " + this.marks[1] + " " + this.marks[2] + " Average: " + this.calculateAverage());
    }
}
