public class constructoroverload {
    int a, b, c;

    constructoroverload() {
        a = 0;
        b = 0;
        c = 0;
    }

    constructoroverload(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }

    constructoroverload(constructoroverload ob) {
        a = ob.a;
        b = ob.b;
        c = ob.c;
    }

    void display() {
        System.out.println("value of a==" + a);
        System.out.println("value of b==" + b);
        System.out.println("value of c==" + c);
    }
}

class constructortest {
    public static void main(String[] args) {
        constructoroverload ob1 = new constructoroverload();
        constructoroverload ob2 = new constructoroverload(5, 10, 30);
        constructoroverload ob3 = new constructoroverload(ob2);
        ob1.display();
        ob2.display();
        ob3.display();
    }
}