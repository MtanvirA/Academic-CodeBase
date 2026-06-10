import java.util.Scanner;

class Circle {
    public double radius;

    Circle(double radius) {
        this.radius = radius;
    }

    public double getArea() {
        return Math.PI * radius * radius;
    }
}

class Cylinder extends Circle {
    double height;

    Cylinder(double radius, double height) {
        super(radius);
        this.height = height;
    }

    public double getArea() {
        return 2 * Math.PI * radius * (radius + height);
    }

}

public class Test {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        double r, h;

        System.out.println("Enter the radius of the circle: ");
        r = input.nextDouble();

        System.out.println("Enter the height of the cylinder: ");
        h = input.nextDouble();

        Circle c = new Circle(r);
        Cylinder c2 = new Cylinder(r, h);

        System.out.println("The area of the circle is: "+ c.getArea());
        System.out.println("The area of the cylinder is: "+ c2.getArea());

    }
}