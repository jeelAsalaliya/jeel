import java.util.*;

class findMiddle{
    public static void main(String args[]){
        int num1,num2,num3;

        Scanner scan=new Scanner(System.in);
        System.out.println("enter the no:");

        num1 = scan.nextInt();
        num2 = scan.nextInt();
        num3 = scan.nextInt();

        if(num2 > num1 && num1 > num3 || num3 > num1 && num1 > num2){
            System.out.println(num1+"is a middle number:");
        } 
        if(num1 > num2 && num2 > num3 || num3 > num2 && num2 > num1){
            System.out.println(num2+"is a middle number");
        }
        if(num1 > num3 &&  num3 > num2 || num2 > num3 && num3 >num1){
            System.out.println(num3+"is a middle number");
        }
    }
}