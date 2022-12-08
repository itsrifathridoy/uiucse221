package Test;

public abstract class abs {
    int x,y;
    abs(int x,int y)
    {
      this.x = x;
      this.y = y;
    }
    void print()
    {
        System.out.println(x+y);
    }
}
