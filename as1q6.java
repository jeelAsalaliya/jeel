import java.util.Scanner;

public class as1q6{
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter a number:");
        int number = scanner.nextInt();

        long Factorial =1;
        int i=1;
        do{
            Factorial*=i;
            i++;
        }while(i<=number);

        System.out.println("factorial of " + number + "is" + Factorial);
        scanner.close();
    }
}