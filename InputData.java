import java.util.Scanner;

class InputData {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("enter an integer");
        int number = input.nextInt();
        System.out.println("entered number=" + number);

        System.out.print("entered an float");
        float number1 = input.nextFloat();
        System.out.println("entered number=" + number1);

        input.nextLine();

        System.out.println("enter string");
        String str = input.nextLine();
        System.out.println("entered string=" + str);
    }
}