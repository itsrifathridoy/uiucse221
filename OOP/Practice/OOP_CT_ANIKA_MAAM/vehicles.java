package OOP_CT_ANIKA_MAAM;

import java.util.Scanner;

public class vehicles {
    Scanner sc = new Scanner(System.in);
    String categories()
    {
        return sc.next().toLowerCase();
    }
    double calculateTruckToll(double kg)
    {
       return kg*10;
    }
}
