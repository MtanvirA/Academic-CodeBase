
import java.util.Scanner;

class Rectangle {
    double h, w, l;

    Rectangle(double l, double w, double h) {
        this.l = l;
        this.h = h;
        this.w = w;

    }

    double area, volume;

    void setArea() {
        area = l * w;
    }

    void setVolume() {
        volume = l * w * h;
    }

    double getArea() {
        setArea();
        return area;
    }

    double getVolume() {
        setVolume();
        return volume;
    }

}

class Cuboid extends Rectangle {

    Cuboid(double l) {
        super(l, l, l);
    }
}

public class RectangleAndCuboid {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        double l, w, h;

        System.out.println("Enter the lengh of the rectangle: ");
        l = input.nextDouble();
        System.out.println("Enter the width of the rectangle: ");
        w = input.nextDouble();
        System.out.println("Enter the height of the rectangle: ");
        h = input.nextDouble();

        Rectangle r = new Rectangle(l, w, h);

        System.out.println("Enter the lenght of the cuboid: ");
        l = input.nextDouble();

        Cuboid c = new Cuboid(l);

        System.out.println("The results are: ");
        System.out.println("For Rectangle: ");
        System.out.println("Area: " + r.getArea());
        System.out.println("Volume: " + r.getVolume());

        System.out.println("For Cuboid: ");
        System.out.println("Area: " + c.getArea());
        System.out.println("Volume: " + c.getVolume());
    }
}
