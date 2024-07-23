class UseStatic {
    static int a = 3;
    static int b;
    int c;

    static void math(int x) {
        System.out.println("x=" + x);
        System.out.println("a=" + a);
        System.out.println("b=" + b);
    }

    static {
        System.out.println("static block initialized");
        a = 10;
        b = a * 4;
    }

    public static void main(String[] args) {
        math(42);
    }
}
