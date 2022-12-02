package Assignment2;

/**
 *
 */
public class Main {

    public static void main(String[] args) {
        Vehicles rickshaw = new Rickshaw();
        Vehicles cng = new CNG();
        Vehicles car = new Car();
        Vehicles bus = new Bus();

        rickshaw.move();
        cng.move();
        car.move();
        bus.move();

        System.out.println();

        rickshaw.permission();
        cng.permission();
        car.permission();
        bus.permission();

        System.out.println();

        ((MotorVehicle)cng).refill_tank();
        ((MotorVehicle)car).refill_tank();
        ((MotorVehicle)bus).refill_tank();


    }
}
