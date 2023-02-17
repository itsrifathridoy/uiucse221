package Test;

abstract class Polygon {
    public abstract void display();
}

class AnonymousDemo {
    public void createClass() {

        // creation of anonymous class extending class Polygon

    }
}

public class main {
    public static void main(String[] args) {
        Polygon p1 = new Polygon() {
            public void display() {
                System.out.println("Inside an anonymous class.");
            }
        };
        Polygon p2 = new Polygon() {
            @Override
            public void display() {
                System.out.println("hello");
            }
        };
//        p1.display();
//        p1.print();
        p2.display();
    }
}
