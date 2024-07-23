class Rectangle {

    int length, width;

    void getdata(int x, int y) {
        length = x;
        width = y;
    }

    int rectArea() {
        int area = length * width;
        return area;
    }
}

class RectArea {
    public static void main(String[] args) {
        int a1, a2;
        Rectangle rect1 = new Rectangle();
        Rectangle rect2 = new Rectangle();
        rect1.length = 5;
        rect1.width = 10;
        a1 = rect1.length * rect1.width;
        System.out.println("area of rect1:" + a1);
        rect2.getdata(2, 12);
        a2 = rect2.rectArea();
        System.out.println("area of rect2:" + a2);

    }

}
