import java.util.Scanner;

class Shape {
    public double area(double radius) {
        return Math.PI * radius * radius;
    }

    public double perimeter(double radius) {
        return 2 * Math.PI * radius;
    }

    public double area(double length, double width) {
        return length * width;
    }

    public double perimeter(double length, double width) {
        return 2 * (length + width);
    }

    public double area(double base, double height, boolean isTriangle) {
        return 0.5 * base * height;
    }

    public double perimeter(double side1, double side2, double side3) {
        return side1 + side2 + side3;
    }
}

public class GeometricShapes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Shape shape = new Shape();

        System.out.print("Enter radius of circle: ");
        double radius = sc.nextDouble();
        System.out.println("Circle Area: " + shape.area(radius));
        System.out.println("Circle Perimeter: " + shape.perimeter(radius));

        System.out.print("Enter length and width of rectangle: ");
        double length = sc.nextDouble();
        double width = sc.nextDouble();
        System.out.println("Rectangle Area: " + shape.area(length, width));
        System.out.println("Rectangle Perimeter: " + shape.perimeter(length, width));

        System.out.print("Enter base and height of triangle: ");
        double base = sc.nextDouble();
        double height = sc.nextDouble();
        System.out.println("Triangle Area: " + shape.area(base, height, true));

        System.out.print("Enter three sides of triangle: ");
        double side1 = sc.nextDouble();
        double side2 = sc.nextDouble();
        double side3 = sc.nextDouble();
        System.out.println("Triangle Perimeter: " + shape.perimeter(side1, side2, side3));

        sc.close();
    }
}
