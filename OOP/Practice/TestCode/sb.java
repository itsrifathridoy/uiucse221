package TestCode;

public class sb {

}
class Person{
    void display()
    {
        System.out.println("Person Class");
    }
}
class Men extends Person{
    @Override
    void display() {
        System.out.println("Men Class");
    }
}
class Women extends Person{
    @Override
    void display() {
        System.out.println("Women");
    }
}