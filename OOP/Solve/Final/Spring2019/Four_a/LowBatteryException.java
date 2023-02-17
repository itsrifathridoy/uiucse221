package Final.Spring2019.Four_a;

public class LowBatteryException  extends Exception{
    public LowBatteryException(int amount)
    {
        super("Battery is low! Should be above 20. \n" +
                "Current value: " + amount);
    }



}
