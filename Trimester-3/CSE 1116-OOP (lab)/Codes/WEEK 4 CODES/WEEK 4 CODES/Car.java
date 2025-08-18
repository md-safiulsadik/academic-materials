public class Car extends Vehicle{
    String name;
    float price;
    Car(int wheels, String type, int id, String name, float price){
        super(wheels,type,id);
        this.name = name;
        this.price = price;
    }
    void CarDetails(){
        System.out.printf("Car Name: %s, Car Type: %s, Car Price: %.2f",this.name,this.type,this.price);
    }
    void printDetails(){
        System.out.println(this.wheels+" "+this.type+" "+this.id+" "+this.price+" "+this.name);
    }
}
