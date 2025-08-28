public class Casio extends Calculator {
    void sum(int p,int q){
        System.out.println(p+"+"+q+"="+(p+q));
    }

    float div(float d, float z){
        float res=0;
        if(z==0.00f){
            System.out.println("Denominator can't be ZERO!");
        }else{
            res = d/z;
        }
        return res;
    }

    int multiply(int a, int b){
        return a*b;
    }
}
