package Test;

public class ErrorFix {
    static String str = "+";
    public static void main(String[] args) {

    }
    static void f1()
    {
        try {
            f2();
            throw new Exception();
        }
        catch (Exception e)
        {
            str+="-";
        }
    }
    static void  f2() throws Exception
    {
        throw new Exception();
    }
}
