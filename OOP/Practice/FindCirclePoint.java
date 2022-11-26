import java.util.Scanner;

class Point{
    int x;
    int y;
    public Point(int x,int y)
    {
        this.x = x;
        this.y =y;
    }
}
class Circle{
    Point center;
    double r;
    public Circle(Point center,double r)
    {
        this.center = center;
        this.r = r;
    }
    public boolean isInside(Point p)
    {
        double l = Math.sqrt(((this.center.x - p.x)*(this.center.x - p.x))+((this.center.y - p.y)*(this.center.y - p.y)));
        if(l<=this.r)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
public class FindCirclePoint {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t;
        t = sc.nextInt();
        while(t!=0)
        {
            Point center = new Point(sc.nextInt(),sc.nextInt());
            Circle c = new Circle(center,sc.nextInt());
            Point p = new Point(sc.nextInt(),sc.nextInt());
            if(c.isInside(p))
            {
                System.out.println("The point is inside the circle");
            }
            else
            {
                System.out.println("The point is not inside the circle");
            }
            t--;
        }

        sc.close();
    }
}

