import java.util.Scanner;

public class foreachloop {
    public static void main(String args[]) {
        String a[] = new String[3];
        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < 3; i++) {
            System.out.println("enter value arr.");
            a[i] = sc.nextLine();
        }
        System.out.println("o/p using for loop");
        for (int i = 0; i < a.length; i++) {
            System.out.println(a[i]);
        }
        System.out.println("o/p for each loop");
        for (String k : a) {
            System.out.println(k);
        }
    }
}
