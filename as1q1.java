class ex1{
    public static void main(String args[]){
        int a,b=1;
        int n=Integer.parseInt(args[0]);

        for(a=1;a<=n;a++){
            b=b*a;
        }
        System.out.println("factorial is:"+b);
        }
    }
