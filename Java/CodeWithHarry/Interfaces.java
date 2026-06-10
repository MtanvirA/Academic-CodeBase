
import java.util.Scanner;

interface Vehicle {
    void accelerate(double a);

    void decelerate(double a);

    private void press() {
        System.out.println("Peddle Pressed!");
    }

    default void status() {
        press();
        System.out.println("The velocity is changing.");
    }
}

class Mercedes implements Vehicle {
    public double v;

    public Mercedes(double v) {
        this.v = v;
    }

    public void accelerate(double a) {
        status();
        v += a;
    }

    public void decelerate(double a) {
        status();
        v -= a;
    }

    public double getVelocity() {
        return v;
    }
}

class RedBull implements Vehicle {
    public double v;

    public RedBull(double v) {
        this.v = v;
    }

    public void accelerate(double a) {
        status();
        v += a;
    }

    public void decelerate(double a) {
        status();
        v -= a;
    }

    public double getVelocity() {
        return v;
    }
}

public class Interfaces {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter the current velocity of the cars: ");
        double v = input.nextDouble();

        System.out.println("Enter the acceleration of Mercedes: ");
        double a = input.nextDouble();

        System.out.println("Enter the acceleration of RedBull: ");
        double a2 = input.nextDouble();

        Mercedes car;

        car = new Mercedes(v);
        car.accelerate(a);
        car.accelerate(a);
        car.accelerate(a);
        car.accelerate(a);
        car.accelerate(a);
        car.decelerate(a);
        car.decelerate(a);
        car.decelerate(a);
        car.accelerate(a);
        car.decelerate(a);

        System.out.println("Current pace of the Mercedes is: " + car.getVelocity());

        RedBull car2;
        car2 = new RedBull(v);

        car2.accelerate(a2);
        car2.accelerate(a2);
        car2.accelerate(a2);
        car2.accelerate(a2);
        car2.decelerate(a2);
        car2.decelerate(a2);
        car2.decelerate(a2);
        car2.accelerate(a2);
        car2.accelerate(a2);
        car2.accelerate(a2);
        car2.accelerate(a2);
        car2.accelerate(a2);
        car2.accelerate(a2);
        car2.accelerate(a2);
        car2.decelerate(a2);
        car2.decelerate(a2);
        car2.decelerate(a2);
        car2.decelerate(a2);
        car2.decelerate(a2);
        car2.decelerate(a2);
        car2.decelerate(a2);

        System.out.println("Current pace of the RedBull is: " + car2.getVelocity());

    }
}
