package fall2020.one_b;

public class GC {
    public static void main(String[] args) {
        Garbage g1 = new Garbage(1);
        new Garbage(2);
        g1.update(new Garbage(3));
    }
}
