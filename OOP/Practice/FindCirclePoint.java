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

        System.out.print("Enter Circle Center Point: ");
        Point center = new Point(sc.nextInt(),sc.nextInt());

        System.out.print("Enter Circle Radius: ");
        Circle c = new Circle(center,sc.nextInt());
        
        System.out.print("Enter A Point: ");
        Point p2 = new Point(sc.nextInt(),sc.nextInt());

        System.out.println("Point in the circle: "+ c.isInside(p2));

        sc.close();
    }
}

