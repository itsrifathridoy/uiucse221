package Test;

public class Men extends People{
    public Men(String name, int age) {
        super(name, age);
    }

    @Override
    public String getName() {
        return "Name";
    }
    void print()
    {
        System.out.println(super.getName() + " " + getAge());
    }
    void print(int name)
    {
        System.out.println(name);
    }

}
