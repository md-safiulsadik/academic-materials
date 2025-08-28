import java.util.ArrayList;

public class TestStudent2 {
    public static void main(String[] args) {
        ArrayList<Integer> marks = new ArrayList<>();
        marks.add(5);
        marks.add(10);
        marks.add(15);
        System.out.println(marks.get(0));
        System.out.println(marks.get(1));
        System.out.println(marks.get(2));
        marks.set(2,20);
        System.out.println(marks.get(2));
        marks.remove(2);
       // System.out.println(marks.get(2));
        System.out.println(marks.size());

    }
}
