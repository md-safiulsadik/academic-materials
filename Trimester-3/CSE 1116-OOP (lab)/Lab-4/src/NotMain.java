
public class NotMain {

    public static void main(String[] args) {
        Vehicle vehicle =  new Vehicle(4, "Car", 921111);

//        System.out.println(vehicle.getWheels());
//        vehicle.printDetails();

        Car car = new Car(3, "Medium", 10024, 4333.99, "BMW");

//        System.out.println(car.getBrand());
//        System.out.println(car.getPrice());
//        System.out.println(car.getWheels());

//        car.printDetails();

        Vehicle bmw = new Car(3,"Light", 341, 349999.43, "BMW");

        bmw.printDetails();


    }
}
