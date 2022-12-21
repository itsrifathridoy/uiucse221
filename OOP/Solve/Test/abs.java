package Test;

//public abstract class abs {
//    int x,y;
//    abs()
//    {
//      this.x = x;
//      this.y = y;
//    }
//    abstract void print();
//}
class demo{
    void display()
    {
        System.out.println("display");
    }
    void play()
    {
        System.out.println("play");
    }
}
class test{
    public static void main(String[] args) {
       demo x = new demo(){
           @Override
           void display() {
               System.out.println("Outer");
           }
       };
       x.display();
//       x.play();
    }
}
