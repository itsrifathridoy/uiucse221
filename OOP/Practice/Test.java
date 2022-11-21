// Online Java Compiler
// Use this editor to write, compile and run your Java code online

class Test {
    public static void main(String[] args) {
        Point p1 = new Point(1,2);
        Point p2 = new Point(3,4);
        func f = new func();
        f.swap(p1,p2);
        System.out.println(p1.x);
        System.out.println(p1.y);
        
    }
}
class func{
   void swap(Point p1,Point p2)
    {
        Point t = p1;
        p1=p2;
        p2=t;
    } 
}
class Point
{
    int x,y;
    Point(int x,int y)
    {
         this.x = x;
         this.y = y;
    }
    
}