public class Calculator {
    void sum(){
        System.out.println("Hi from sum__1!");
    }
    void sum(int a, int b){
        int y = a+b;
        System.out.println("The sum 2__is: "+y);
    }

    void sum(float a, float b){
        float s = a+b;
        System.out.println("The sum__3 is: "+s);
    }

    void div(int a, int b){
        if(b==0){
            System.out.println("B can't be 0!");
        }else{
            int d = a/b;
            System.out.println("The div is: "+d);
        }
    }

    float div(float x, float y){
        return x/y;
    }

}
