class throwsdemo1{
    static void throwone(){
        System.out.println("inside throwone:");
        try{
            throw new IllegalAccessException("demo");
        }
    catch(IllegalAccessException e){
        System.out.println("caught inside method:");
    }
    }
    public static void main(String args[]){
        throwone();
    }
}
