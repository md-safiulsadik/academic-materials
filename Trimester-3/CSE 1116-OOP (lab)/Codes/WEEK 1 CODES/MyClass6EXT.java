public class MyClass6EXT {
    int sum(int a, int b){
        return  a+b;
    }

    public static void main(String[] args) {
        int x=10,y=15;
        MyClass6EXT m6 = new MyClass6EXT();

        int res = m6.sum(x,y);
        System.out.println("Sum ="+res);
    }
}
