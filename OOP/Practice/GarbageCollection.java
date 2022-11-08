class Test{
    int id;
    Test(int id)
    {
        this.id = id;
    }
}
class Update{
    Test t;
    Update(Test t)
    {
        this.t = t;
    }
}
public class GarbageCollection {
  public static void main(String[] args) {
    Update u = new Update(new Test(50));
    System.out.println(u.t.id);
  }  
}
