public class Car extends Vehicle{
    public static void main(String[] args) {
        Car c = new Car();
        System.out.println(c.defaultVar);
        System.out.println(c.protectedVar);
        System.out.println(c.publicVar);
        //System.out.println(c.privateVar);
    }
}
