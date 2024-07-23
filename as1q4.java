public class as1q4{
    public static void main(String args[]){
        int n=5;
        int i=1;

        while(i<=n){
            int num=i;
            int j=1;
            while(j<=i){
                System.out.print(num+" ");
                num+=i;
                j++;
            }
            System.out.println();
            i++;
        }
    }
}