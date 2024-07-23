import java.util.Scanner;

public class calc {
    private double no1;
    private double no2;

public calc(){
    this.no1 = 0;
    this.no2 = 0;

    public void setNumbers(double no1, double no2) {
        this.no1 = no1;
        this.no2 = no2;
    }

    public void addition() {
        System.out.println("add:" + (no1 + no2));
    }

    public void substraction() {
        System.out.println("sub:" + (no1 - no2));
    }

    public void Muliplication() {
        System.out.println("mult:" + (no1 * no2));
    }

    public void division() {
        System.out.println("div:" + (no1 / no2));
    }

}

    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        calc calc = new cal();
        int choice;

        do{
            System.out.println("0 exit:");
            System.out.println("1 take input(no1 and no2)");
            System.out.println("2 addition");
            System.out.println("3 subtraction");
            System.out.println("4 multiplication");
            System.out.println("5 division");
            System.out.println("enter choice:");

            choice = scanner.nextInt();
            switch(choice){
                case 0:
                    System.out.print("existing:");
                    break;
            }
            case 1:
                System.out.println("enter two numbers:");
                double num1 = scanner.nextDouble();
                double num2 = scanner.nextDouble();
                calc.setNumbers(num1,num2);
                break;

                case 2:
                calc.addition();
                break;

                case 3:
                calc.subtrction();

                case 4:
                calc.multiplication();

                case 5:
                calc.division();
                break;

                default:
                System.out.println("Invalid choice!");
            }while(choice!=0);Scanner.close();
    }
}