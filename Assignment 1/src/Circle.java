public class Circle extends PrintableObject implements Shape {

    @Override
    public Double getPerimeter() {
        // TODO Auto-generated method stub
        return 2 * Math.PI * radius;
    }

    @Override
    public double getArea() {
        // TODO Auto-generated method stub
        return Math.PI * radius * radius;
    }

    double radius;

    public double getRadius() {
        return radius;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }

    public Circle() {

    }

    public Circle(double radius) {
        this.radius = radius;
    }

    public String toString() {
        return getName() + ", Its radius is: " + getRadius();
    }

    public static Circle parse(String userInput) {
        String[] parsedInput = userInput.split(",");
        double radius = Double.parseDouble(parsedInput[1]);
        return new Circle(radius);
    }

    public String getName() {
        return super.getName().toUpperCase();
    }
}
