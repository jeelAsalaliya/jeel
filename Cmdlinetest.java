class Cmdlinetest {
    public static void main(String args[]) {
        int count, i = 0;
        count = args.length;

        System.out.println("no of argument=" + count);

        while (i < count) {
            System.out.println("value=" + args[i]);
            i++;
        }
    }
}