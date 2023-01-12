package Exception;

class Excpt extends RuntimeException {
    Excpt(String m)
    {
        super(m);
    }
}

public class Main {
    public static void main(String[] args) {
        try{
            throw new RuntimeException();
        }
        catch (Exception e)
        {
            System.out.println(e);
            test();
        }
        finally {
            System.out.println("finally");
        }

    }
    static void test()
    {
        System.out.println("test");
    }

}
