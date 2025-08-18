public class TestVehicle {
    public static void main(String[] args) {
        Vehicle vehicle = new Vehicle(4,"Medium",101);
        System.out.println("Number of wheels: "+vehicle.getWheels());
        vehicle.printDetails();

        Car car = new Car(4,"light-weight",105,"Ferrari",8000000.00f);
        car.printDetails();
        System.out.println("Number of wheels: "+car.getWheels());
        car.CarDetails();

        Tesla tesla = new Tesla(3,"light-weight",505,"Mayer Dowa",80000.50f,"Electricity",100.25f);
        System.out.println("Tesla wheels: "+tesla.getWheels());
        tesla.printDetails();
        tesla.CarDetails();
        tesla.TeslaSpeed();

    }
}
