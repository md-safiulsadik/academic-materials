public class MyArray {
    public static void main(String[] args) {
        int[] data = {4,3,5,6,7,1};
        System.out.println(data[1]);
        data[1]=100;
        System.out.println(data[1]);
        System.out.println(data.length);
        for(int i=0;i< data.length;i++){
            data[i]=data[i]+2;
            System.out.println(data[i]);
        }

        for(int a: data){
            System.out.println(a+2);
        }


    }
}
