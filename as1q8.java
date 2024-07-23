public class as1q8{
    public static void main(String args[]){
        int n=5;

        for(int i=1;i<=n;i++){
            for(int j=i;j<n;j++){
                System.out.print(" ");
            }
            for(int j=i;j<i+1;j++){
                System.out.print(j+" ");
            }
            System.out.print(i+n-1+" ");

            for(int j=i+i-1;j>=i;j--){
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
}