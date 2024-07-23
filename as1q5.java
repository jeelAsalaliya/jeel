public class as1q5{
public static void main(String args[]){
    int n=4;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            System.out.println(j);
        }
        for(int k=1;k<=2*(i-1);k++){
            System.out.println("*");
        }
        for(int j=n-i+1;j>=1;j--){
            System.out.println(j);
        }
        System.out.println();
    }
}
}