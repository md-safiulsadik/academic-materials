public class Vehicle {
    int wheels;
    String type;
    int id;
    Vehicle(int wheels, String type, int id){
        this.wheels = wheels;
        this.type = type;
        this.id = id;
    }
    void printDetails(){
        System.out.println("Vehicle Class- Wheels: "+this.wheels+" Type: "+this.type+" ID:"+this.id );
    }
    int getWheels(){
        return this.wheels;
    }
}
