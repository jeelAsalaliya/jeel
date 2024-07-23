import java.util.Arrays;
import java.util.Scanner;

import javax.print.DocFlavor.STRING;

public class sortstringarray {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);

        String[] names = new String[5];
        System.out.println("enter 5 names:");

        for (int i = 0; i < 5; i++) {
            System.out.println("name" + (i + 1) + ":");
            names[i] = scanner.nextLine();
        }
        Arrays.sort(names);
        System.out.println("sorted names::");

        for (String name : names) {
            System.out.println(name);
        }
    }
}
