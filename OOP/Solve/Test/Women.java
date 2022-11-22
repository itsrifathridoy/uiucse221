package Test;

public class Women extends People{
    public Women(String name, int age) {
        super(name, age);
    }

    @Override
    public String getName() {
        return "Name";
    }
    void print()
    {
        System.out.println("Women");
    }
}
