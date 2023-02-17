package Collection;

import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class HashSett {
    public static void main(String[] args) {
        Set<Point> ref = new HashSet<>();
        ref.add(new Point(1,6));
        ref.add(new Point(1,2));
        ref.add(new Point(3,8));
        ref.add(new Point(3,8));

        Iterator<Point> it = ref.iterator();
        while (it.hasNext())
        {
            Point p = it.next();
            System.out.println(p.x + " " + p.y);
        }

//        for (Point x:ref) {
//            System.out.println(x.x + " "+ x.y);
//
//        }
    }
}
