public class Car extends Vehicle{
    double price;
    String brand;

    public Car(int wheels, String type, int id, double price, String brand) {
        super(wheels, type, id);
        this.brand = brand;
        this.price = price;
    }

    public double getPrice() {
        return price;
    }

    public String getBrand() {
        return brand;
    }

    @Override
    public void printDetails() {
        System.out.println("Number 0f wheels: " + wheels);
        System.out.println("Vehicle type: " + type);
        System.out.println("Vehicle ID: " + id);
        System.out.println("Price: " + price);
        System.out.println("Brand: " + brand);
    }

}
