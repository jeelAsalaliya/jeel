class throwdemo{
    static void demoproc(){
        try{
            throw new NullPointerException("demo");
        }
        catch(NullPointerException e){
            System.out.println("caught inside demoproc:");
            throw e;
        }
    }
    public static void main(String args[]){
        try{
            demoproc();
        }
        catch(NullPointerException p){
            System.out.println("recaught:"+p);
        }
    }
}