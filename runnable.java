class AA implements Runnable{
    public void run(){

        for(int i=1;i<=5;i++){
            System.out.println("class A:");
            try{
                Thread.sleep(100);
            }
            catch(Exception e){}
        }
        System.out.println("exit from A:");
    }
}

class TestAA{
    public static void main(String args[]){
        AA obj=new AA();
        Thread x=new Thread(obj);
        x.start();

        try{
            for(int i=1;i<=5;i++){
                System.out.println("main thread:");

                try{
                    Thread.sleep(200);
                }
                catch(Exception e){}
            }
        }
        catch(Exception e){}
        System.out.println("exit from main:");
    }
}