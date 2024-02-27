package shapes;

public class Rectangle extends Shape {
    private float length;
    private float bredth;

    public Rectangle() {
    }

    public void setLength(float length) {
        this.length = length;
    }

    public void setBredth(float bredth) {
        this.bredth = bredth;
    }

    @Override
    public void calculateArea() {
        this.area = this.length * this.bredth;
    }
}
