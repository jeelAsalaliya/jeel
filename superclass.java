class A {
    int i;
    int j;

    void setij(int x, int y) {
        i = x;
        j = y;

    }
}

class B extends A {
    int total;

    void sum() {
        total = i + j;
    }
}

class Access {
    public static void main(String[] args) {
        B subob = new B();
        subob.setij(10, 12);
        subob.sum();
        System.out.println("total as=" + subob.total);
    }
}