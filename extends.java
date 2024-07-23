class A extends Thread{
    String Sname;
    A(String name){
        super(name);
        Sname=name;
    }
    public void run(){
        try{
            for(int i=1;i<=5;i++){
System.out.println("Sname:"+i);
Thread.sleep(500);
            }
            System.out.println("exit from child Thread::"+Sname);
        }
        catch(InterruptedException e){
            System.out.println(e);
        }
    }
}


class ThreadA{
    public static void main(String args[]){
        System.out.println("main thread:");
        A a=new A("one");
        a.start();
        new A("two").start();
    }
}