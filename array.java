import java.util.Scanner;

class array {
    public static void main(String args[]) {
        int arr1[] = { 1, 2, 3, 4, 5 };

        for (int i = 0; i < arr1.length; i++) {
            System.out.println(arr1[i]);
        }
        int[] arr = new int[3];
        arr[0] = 100;
        arr[1] = 200;
        arr[2] = -100;

        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
        Scanner Sc = new Scanner(System.in);

        float arr2[] = new float[3];

        for (int i = 0; i < arr2.length; i++) {
            System.out.println("enter value to array:");
            arr2[i] = Sc.nextFloat();
        }
        for (int i = 0; i < arr2.length; i++) {
            System.out.println(arr2[i]);
        }
    }
}