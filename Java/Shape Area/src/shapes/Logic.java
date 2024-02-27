package shapes;

import java.util.Scanner;

public class Logic {
    private Shape shape;
    private static Scanner sc = new Scanner(System.in);

    public void acceptRecord() {
        if (this.shape instanceof Rectangle) {
            Rectangle rect = (Rectangle) this.shape;
            System.out.print("Enter Length: ");
            rect.setLength(sc.nextFloat());
            System.out.print("Enter Breadth: ");
            rect.setBredth(sc.nextFloat());
        } else {
            Circle circle = (Circle) this.shape;
            System.out.print("Enter Radius: ");
            circle.setRadius(sc.nextFloat());
        }
        this.shape.calculateArea();
    }

    public void printRecord() {
        System.out.println("Area: " + this.shape.getArea());
    }

    public void setShape(Shape shape) {
        this.shape = shape;
    }

    public static ShapeEnum menuList() {

        System.out.println("0. Exit");
        System.out.println("1. Rectangle");
        System.out.println("2. Circle");
        System.out.print("Enter Choice: ");
        return ShapeEnum.values()[sc.nextInt()];
    }

    public static Shape getReference(ShapeEnum choice) {
        switch (choice) {
            case RECTANGLE:
                return new Rectangle();
            case CIRCLE:
                return new Circle();
            default:
                break;
        }
        return null;
    }
}
