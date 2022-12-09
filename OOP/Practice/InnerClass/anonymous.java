package InnerClass;
class My{
    static final int x;
    static
    {
        x=6;
    }




    static void print()
    {
        System.out.println(x);
    }
}

public class anonymous {


    public static void main(String[] args) {
        My.print();
    }
    static
    {
        System.out.println("Block 2");
    }


}
