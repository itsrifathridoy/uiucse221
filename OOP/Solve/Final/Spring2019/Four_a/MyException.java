package Final.Spring2019.Four_a;

import java . util. Scanner;
public class MyException {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 2; i++) {
            System.out.print("Enter current charge percent:");
            int chargeAmount = sc.nextInt();
            try {
                if (chargeAmount <= 20)
                    throw new LowBatteryException(chargeAmount);
                else
                    System.out.println("Enough charge in battery .");
            } catch (LowBatteryException e) {

                System.out.println(e.getMessage());
            }
        }
    }
}