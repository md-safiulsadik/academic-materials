public class Cow extends Animal{

    @Override
    public void makeSound() {
        System.out.println("Cow goes moo-moo");
        System.out.println(getClass().getName());
    }
}
