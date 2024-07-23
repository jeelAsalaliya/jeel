import java.util.Scanner;

public class reverse{
    public static void main(String args[]){
        Scanner Scanner=new Scanner(System.in);
        System.out.print("4 digit enter:");

        int number = Scanner.nextInt();
        int digit1 = number%10;
        int digit2 = (number/10)%10;
        int digit3 = (number/100)%10;
        int digit4 = (number/1000)%10;
        int reversenumber = digit1*1000+digit2*100+digit3*10+digit4;

        System.out.println("reversenumber "+reversenumber);
    }
}