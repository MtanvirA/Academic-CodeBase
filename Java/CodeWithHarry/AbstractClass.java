import java.util.Scanner;

abstract class Shape {
    abstract double getPerimeter(double l, double w, double h);

    abstract double getArea(double l, double w, double h);

    abstract double getVolume(double l, double w, double h);
}

class Rectangle extends Shape {

    double getPerimeter(double l, double w, double h) {
        return 2 * (l + w);
    }

    double getArea(double l, double w, double h) {
        return l * w;
    }

    double getVolume(double l, double w, double h) {
        return l * w * h;
    }

}

class Cuboid extends Shape {

    double getPerimeter(double l, double w, double h) {
        return 2 * (l + w);
    }

    double getArea(double l, double w, double h) {
        return l * w;
    }

    double getVolume(double l, double w, double h) {
        return l * w * h;
    }

}

public class AbstractClass {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double l2, l, w, h;

        System.out.println("Enter the lengh of the rectangle: ");
        l = input.nextDouble();
        System.out.println("Enter the width of the rectangle: ");
        w = input.nextDouble();
        System.out.println("Enter the height of the rectangle: ");
        h = input.nextDouble();

        Shape s;
        s = new Rectangle();

        System.out.println("Enter the lenght of the cuboid: ");
        l2 = input.nextDouble();

        System.out.println("The results are: ");
        System.out.println("For Rectangle: ");
        System.out.println("Perimeter: " + s.getPerimeter(l, w, h));
        System.out.println("Area: " + s.getArea(l, w, h));
        System.out.println("Volume: " + s.getVolume(l, w, h));

        s = new Cuboid();

        System.out.println("For Cuboid: ");
        System.out.println("Perimeter: " + s.getPerimeter(l2, l2, l2));
        System.out.println("Area: " + s.getArea(l2, l2, l2));
        System.out.println("Volume: " + s.getVolume(l2, l2, l2));
    }
}
