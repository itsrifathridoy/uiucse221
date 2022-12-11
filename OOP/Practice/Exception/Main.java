package Exception;

class Excpt extends RuntimeException {
    public Excpt(String message)
    {
        super(message);
    }

}

public class Main {
    static void ex(int x) {
        if(x<0)
        throw new Excpt("fdhjshf");
        else
            System.out.println(x);
    }
    public static void main(String[] args){
        ex(-5);
    }
}
