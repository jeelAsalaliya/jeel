
class labelbreak {
    public static void main(String[] args) {
        outer: for (int i = 0; i < 3; i++) {
            System.out.println("pass" + i + ":");
            for (int j = 0; j < 100; j++) {
                if (j == 10)
                    break outer;
                System.out.println(j + " ");
            }
            System.out.println("this will not print");
        }
        System.out.println("loops complete.");

    }
}