package TestCode;

class m{
    public static void main(String[] args){
        try {

        test();
        }
        catch (Exception e)
        {
            e.getMessage()
        }
        finally {

        }
    }
    static void test () throws Exception
    {
        throw new Exception("Hello");
    }
}
