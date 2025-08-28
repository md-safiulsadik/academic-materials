public class TestClass {
    public static void main(String[] args) {
        Calculator c = new Calculator();
        c.sum();
        c.sum(5,8);
        c.sum(8.5f,12.6f);
        c.div(10,2);
        float d = c.div(10.50f,2.50f);
        System.out.println("The div is: "+d);

        System.out.println("The div is: "+c.div(10.50f,2.50f));
        Casio casio = new Casio();
        casio.sum();
        casio.sum(10,20);
        casio.sum(10.50f,5.20f);
        casio.div(15,3);
        System.out.println("The Casio div is: "+casio.div(30.55f,10.22f));
        System.out.println("Multiply:"+casio.multiply(10,5));

        Calculator c2 = new Casio();
        c2.sum();
        c2.sum(10.5f,1.55f);
        c2.sum(50,5);
        System.out.println("div: "+c2.div(100.50f,2.50f));
        //c2.multiply();

        Casio c3 = (Casio) c2;
        c3.multiply(10,5);
        c3.div(500.5f,2.500f);
        c3.sum();

    }
}
