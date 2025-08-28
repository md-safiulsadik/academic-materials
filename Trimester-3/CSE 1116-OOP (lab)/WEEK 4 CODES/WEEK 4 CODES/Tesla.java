public class Tesla extends Car{
    String fuel;
    float speed;

    Tesla(int wheels, String type, int id, String name, float price, String fuel, float speed) {
        super(wheels, type, id, name, price);
        this.fuel = fuel;
        this.speed = speed;
    }
    void TeslaSpeed(){
        System.out.println("Speed is: "+this.speed);
    }
}
