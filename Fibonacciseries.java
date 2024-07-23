public class as1q11{
    public static void main(String args[]){
        int n=10;

        Fibonacciseries[0]=0;
        Fibonacciseries[1]=1;

        for(int i=1;i<n;i++){
            as1q11[i]=Fibonacciseries[i-1]+Fibonacciseries[i-2];
        }
        System.out.println("first 10  num:");
        for(int i=0;i<n;i++){
            System.out.println(Fibonacciseries[i]+" ");
        }
    }
}