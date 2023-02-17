package Fall2021.Q2;

public class AQ {
    double v1;
    int a1;

    public AQ(double v1, int a1) {
        this.v1 = v1;
        this.a1 = a1;
    }

    public AQ(double v1)
    {
        this.v1 = v1;
    }
    public AQ()
    {
        this(100);
    }
    void f1(int a,int b)
    {
        System.out.println(a+b+v1+a1);
    }
    void f1(long a,int b)
    {
        System.out.println(v1+a1+a+b);
    }

}
