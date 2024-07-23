import java.util.Scanner;

public class Result{
    public static void main(String args[]){
Scanner sc = new Scanner(System.in);
System.out.println("enter the marks:");
int marks=Sc.nextInt();

if(marks>70){
    System.out.println("Result:Distinction");
}
else if(marks>60){
    System.out.println("Result:FirstClass");
}
else if(marks>50){
    System.out.println("result:SecondClass");
}
else if(marks>35){
    System.out.println("result:PassClass");
}
else{
    System.out.println("Result:Fail");
}
    }
}