public class as1q10{
public static void main(String[] args) {
     int n=8;
     
     for(int i=0;i<n;i++){
        int number=1;
        System.out.println("%"+(n-i)*2+"s","");

        for(int j=0;j<=i;j++){
            System.out.println("%4d",number);
            number = number*(i-j)/(j+1);
        }
        System.out.println();
     }
    }
}