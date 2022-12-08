package InnerClass;
class My{
    final int x;
    static
    {
        System.out.println("Block 1");
    }

    My(int x) {
        this.x = x;
    }


    static void print()
    {
        System.out.println("Hello");
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
