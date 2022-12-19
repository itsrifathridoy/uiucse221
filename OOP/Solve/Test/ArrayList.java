package Test;

interface Person<T> {
    void print();
    void display();
}
public class ArrayList {
    public static <T extends Person<? super T>> void print() {
        System.out.println();
    }
}
class Main{
    public static void main(String[] args) {
        ArrayList.print();
    }
}
