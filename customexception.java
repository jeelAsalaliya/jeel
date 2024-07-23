class myException extends Exception{
    private int detail;
    myException(int a){
        detail=a;
    }
    public String tostring(){
        return "myException["+detail+"]";
    }
}
class Exceptiondemo{
    static void compute(int a) throws myException{
        System.out.println("called compute:("+a+")");

        if(a>10)
        throw new myException(a);
        System.out.println("normal exit:");
} 
public static void main(String args[]){
    try{
        compute(1);
        compute(20);
    }
    catch(myException e){
        System.out.println("caught"+e);
    }
}
}