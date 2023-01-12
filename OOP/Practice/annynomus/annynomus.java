package annynomus;

interface gas{
    void isFull();
}
public class annynomus {
    public static void main(String[] args) {
        gas cng=new gas() {
            @Override
            public void isFull() {
                System.out.println("Uses lpg");
            }
        };

    }
}
interface a{

}
interface b{

}
interface c extends a,b{

}
