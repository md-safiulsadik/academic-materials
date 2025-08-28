


public class ClassWithStaticBlock {
    // A static variable that will be initialized by the static block.
    private static int objectCount;



    // Main method to demonstrate class loading and object creation.
    public static void main(String[] args) {
        System.out.println("Starting main method...");

        // The static block runs here, before the first object is created.
        ClassWithStaticBlock obj1 = new ClassWithStaticBlock();

        // The constructor runs for each new object.

        ClassWithStaticBlock obj2 = new ClassWithStaticBlock();

        ClassWithStaticBlock obj3 = new ClassWithStaticBlock();
        ClassWithStaticBlock obj4 = new ClassWithStaticBlock();

    }
    static {
        System.out.println("Static 3 block is being executed.");
        // Initialize the static variable here.
        objectCount = 9;
        objectCount += 1;
    }


    // A static block for class-level initialization.
    // This code runs only once when the ClassWithStaticBlock class is loaded by the JVM.
    static {
        System.out.println("Static 1 block is being executed.");
        // Initialize the static variable here.
        objectCount = 9;
        objectCount += 1;
    }

    static {
        System.out.println("Static 2 block is being executed.");
        // Initialize the static variable here.
        objectCount = 9;
        objectCount += 1;
    }

    // A constructor for object initialization.
    // This code runs every time a new instance of the class is created.
    public ClassWithStaticBlock() {
        objectCount++;
        System.out.println("New object created. Current count: " + objectCount);

    }



}
