public class as1q9{
    public static void main(String args[]){
        int n=5;

        for(int i=0;i<n;i++){
            int alphabet=65;
            for(int j=0;j<=i;j++){
                System.out.print((char)(alphabet+j)+" ");
            }
            for(int j=i-1;j>=0;j--){
                System.out.print((char)(alphabet+j)+" ");
            }
            System.out.println();
        }
    }
}