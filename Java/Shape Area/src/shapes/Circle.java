package shapes;

public class Circle extends Shape {
    private float radius;

    public Circle() {
    }

    public void setRadius(float radius) {
        this.radius = radius;
    }

    @Override
    public void calculateArea() {
        this.area = (float) (Math.PI * Math.pow(this.radius, 2));
    }
}
