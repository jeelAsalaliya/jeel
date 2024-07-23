class nesting {
    int m, n;

    nesting(int x, int y) {
        m = x;
        n = y;
    }

    int largest() {
        if (m > n) {
            return m;
        } else {
            return n;
        }
    }

    void display() {
        int large = largest();
        System.out.println("large no=" + large);
    }
};

class NestingTest {
    public static void main(String[] args) {
        nesting n = new nesting(5, 10);
    }

}
