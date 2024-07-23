import java.util.Scanner;

public class as1q7{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int dayNum;
    
        System.out.println("enter any day no:");
        dayNum = in.nextInt();

        switch(dayNum){
            case 1:
            System.out.println("Monday");
            break;
            case 2:
            System.out.println("Tuesday");
            break;
            case 3:
            System.out.println("Wednesday");
            break;
            case 4:
            System.out.println("Thuresday");
            break;
            case 5:
            System.out.println("Friday");
            break;
            case 6:
            System.out.println("Saturday");
            break;
            case 7:
            System.out.println("Sunday");
            break;

            default:
            System.out.println("Invalid day Number!");
            break;
        }
    }
}