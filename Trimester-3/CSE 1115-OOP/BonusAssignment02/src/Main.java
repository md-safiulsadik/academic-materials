import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Animal animal;

        while (true) {
            System.out.println("Select an animal: 1. Dog 2. Cow 3. Cat 4. Crow (0 (zero) to exit.)");
            int choice = Integer.parseInt(scanner.nextLine());

            if (choice == 0) return;

            switch (choice) {
                case 1:
                    animal = new Dog();
                    animal.makeSound();
                    break;
                case 2:
                    animal = new Cow();
                    animal.makeSound();;
                    break;
                case 3:
                    animal = new Cat();
                    animal.makeSound();
                    break;
                case 4:
                    animal = new Crow();
                    animal.makeSound();
                    ((Crow) animal).fly();
                    break;
                default:
                    System.out.println("Invalid !");
                    break;
            }
        }
    }
}
