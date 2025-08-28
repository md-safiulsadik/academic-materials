
public class Vehicle {
    int wheels;
    String type;
    int id;

    public Vehicle(int wheels, String type, int id) {
        this.wheels = wheels;
        this.type = type;
        this.id = id;
    }

    public int getWheels() {
        return wheels;
    }

    public void printDetails() {
        System.out.println("Number 0f wheels: " + wheels);
        System.out.println("Vehicle type: " + type);
        System.out.println("Vehicle ID: " + id);
    }
}
