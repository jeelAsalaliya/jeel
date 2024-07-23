class A extends Thread{
    public void run(){
        for(int i=1;i<5;i++){
            System.out.println("thread A:"+i);
        }
        System.out.println("exit from A:");
    }
}

class B extends Thread{
    public void run(){
        for(int j=1;j<5;j++){
            System.out.println("thread B:"+j);
        }
        System.out.println("exit from B:");
    }
}

class Threadtest{
    public static void main(String args[]){
        new A().start();
        B b=new B();
        b.start();
    }
}