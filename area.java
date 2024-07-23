
public class area {
    public void calculateanddisplayarea(double side) {
        System.out.println("area of square:" + (side * side));
    }

    public void calculateanddisplayarea(double length, double width) {
        System.out.println("area rectangles:" + (length * width));
    }

    public void calculateanddisplayarea(double base, double height, boolean istriangle) {
        double area = (base * height) / 2;
        if (istriangle) {
            System.out.println("area of triangle:" + area);
        } else {
            System.out.println("Invalid shape:::");
        }
    }

    public static void main(String args[]) {
        area areacalculator = new area();
        areacalculator.calculateanddisplayarea(5);
        areacalculator.calculateanddisplayarea(4, 6);
        areacalculator.calculateanddisplayarea(4, 5, true);
    }
}
