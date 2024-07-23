import java.util.Arrays;
import java.util.Scanner;

public class sortintaray {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int array[] = new int[5];
        System.out.println("enter 5 values:");

        for (int i = 0; i < 5; i++) {
            System.out.println("value:" + (i + 1) + ":");
            array[i] = scanner.nextInt();
        }
        Arrays.sort(array);
        System.out.println("sorted array:");

        for (int value : array) {
            System.out.println(value + " ");
        }
    }
}
