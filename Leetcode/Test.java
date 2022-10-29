class Pawan {

    public void name() {
        System.out.println("how are you");
    }
}

class Child extends Pawan {

    public void name() {
        System.out.println("Bhad me jao");
    }
}

public class Test {

    public static void main(String[] args) {
        Pawan c = new Pawan();
        c.name();
    }
}