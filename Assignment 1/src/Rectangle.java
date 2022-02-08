public class Rectangle extends PrintableObject implements Shape {

    @Override
    public Double getPerimeter() {
        // TODO Auto-generated method stub
        return 2 * (this.height + this.width);
    }

    @Override
    public double getArea() {
        // TODO Auto-generated method stub
        return this.height * this.width;
    }

    double width, height;

    public double getWidth() {
        return width;
    }

    public double getheight() {
        return height;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public void setheight(double height) {
        this.height = height;
    }

    public Rectangle() {

    }

    public Rectangle(double width, double height) {
        this.height = height;
        this.width = width;
    }

    public String toString() {
        return this.getName() + " This object's height is:" + this.getheight() + " This object's width is:"
                + this.getWidth();
    }

    public static Rectangle parse(String userInput) {
        String[] parsedInput = userInput.split(",");
        double width = Double.parseDouble(parsedInput[1]);
        double height = Double.parseDouble(parsedInput[2]);
        return new Rectangle(width, height);
    }
}
