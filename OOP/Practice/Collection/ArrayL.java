package Collection;

import java.util.ArrayList;
import java.util.Collections;

public class ArrayL  {

    public static void main(String[] args){

        ArrayList<Point> ref =  new ArrayList<>();
        ref.add(new Point(1,6));
        ref.add(new Point(1,2));
        ref.add(new Point(3,8));
        Collections.sort(ref,(p1,p2)->{
            if(p1.x>p2.x)
            {
                return 1;
            }
            else if(p1.x<p2.x)
            {
                return 1;
            }
            else
            {
                if(p1.y > p2.y)
                {
                    return 1;
                }
                else if(p1.y<p2.y)
                {
                    return -1;
                }
                else
                {
                    return 0;
                }
            }
        });


        for (Point x:ref) {
            System.out.println(x.x + " "+ x.y);

        }

    }

}
