package Final.Fall2022.Two_a;

public class Test {
    static int TestA() throws Exception
    {
        throw new Exception("Exception has been thrown from TestA");
    }
    static void TestB() throws Exception
    {
        int a = TestA();
        if(a==0)
        {
            System.out.println("Exception in Test B: a is zero");
        }
        else{
            System.out.println("You should figure out the value if a "+ a);
            throw new Exception("Exception from else clause in TestB");
        }
        return;
    }
    static boolean TestC(boolean val) throws Exception
    {
        if (val== false)
        {
            throw new Exception("Exception in TestC");
        }
        return false;
    }

    public static void main(String[] args) {
        try {
            TestC(false);
        }
        catch (Exception e)
        {
            System.out.println(e);
            try{
                TestB();
            }
            catch (Exception e1)
            {
                System.out.println(e1);
            }
        }
    }
}
