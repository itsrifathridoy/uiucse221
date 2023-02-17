
package TestCode;

public class test {
    public static void main(String[] args) {
        Movable m1 = new MovablePoint(5, 6, 10, 15);     // upcast
        System.out.println(m1);
        m1.moveLeft();
        System.out.println(m1);

        Movable m2 = new MovableCircle(1, 2, 3, 4, 20);  // upcast
        System.out.println(m2);
        m2.moveRight();
        System.out.println(m2);
        Movable m3 = new MovableRectangle(1, 2, 3, 4, 5,6 );
        m3.moveUp();
        System.out.println(m3);

    }
}
class MovablePoint implements Movable {
    int x, y, xSpeed, ySpeed;     // package access

    public MovablePoint(int x, int y, int xSpeed, int ySpeed) {
        this.x = x;
        this.y = y;
        this.xSpeed = xSpeed;
        this.ySpeed = ySpeed;
    }

    // Implement abstract methods declared in the interface Movable
    @Override
    public void moveUp() {
        y -= ySpeed;
    }
    @Override
    public void moveDown() {
        y += ySpeed;
    }
    @Override
    public void moveLeft() {
        x -= xSpeed;
    }
    @Override
    public void moveRight() {
        x += xSpeed;
    }

    @Override
    public String toString() {
        return "(" + x + "," + y + "), speed=("+ xSpeed + "," + ySpeed + ")";
    }
}
class MovableCircle implements Movable {
    private int radius;
    private MovablePoint center;   // can use center.x, center.y directly due to MovablePoint's visibility

    public MovableCircle(int x, int y, int xSpeed, int ySpeed, int radius) {
        center = new MovablePoint(x, y, xSpeed, ySpeed);
        this.radius = radius;
    }

    // Implement abstract methods declared in the interface Movable
    @Override
    public void moveUp() {
        center.y -= center.ySpeed;
    }
    @Override
    public void moveDown() {
        center.y += center.ySpeed;
    }
    @Override
    public void moveLeft() {
        center.x -= center.xSpeed;
    }
    @Override
    public void moveRight() {
        center.x += center.xSpeed;
    }

    @Override
    public String toString() {
        return "center=" + center + ", radius=" + radius;
    }
}
interface Movable {
    // all methods are public abstract
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
}
class MovableRectangle implements Movable {
    private MovablePoint topLeft;
    private MovablePoint bottomRight;

    public MovableRectangle(int x1, int y1, int x2, int y2, int xSpeed, int ySpeed) {
        topLeft = new MovablePoint(x1, y1, xSpeed, ySpeed);
        bottomRight = new MovablePoint(x2, y2, xSpeed, ySpeed);
    }

    @Override
    public void moveUp() {
        topLeft.y -= topLeft.ySpeed;
        bottomRight.y -= bottomRight.ySpeed;
    }

    @Override
    public void moveDown() {
        topLeft.y += topLeft.ySpeed;
        bottomRight.y += bottomRight.ySpeed;
    }

    @Override
    public void moveLeft() {
        topLeft.x -= topLeft.xSpeed;
        bottomRight.x -= bottomRight.xSpeed;
    }

    @Override
    public void moveRight() {
        topLeft.x += topLeft.xSpeed;
        bottomRight.x += bottomRight.xSpeed;
    }

    @Override
    public String toString() {
        return "topLeft=" + topLeft + ", bottomRight=" + bottomRight;
    }
}
