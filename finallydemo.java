class finallydemo{
    static void proca(){
    try{
        System.out.println("inside block:");
        throw new RuntimeException("demo");
    }
    finally{
        System.out.println("proca is finally:");
    
}
    }
    static void procb(){
        try{
            System.out.println("inside procb:");
            return;
        }
        finally{
            System.out.println("procb is finally");
        }
    }
    static void procc(){
        try{
        System.out.println("inside procc:");
        }
        finally{
            System.out.println("procc is finally");
        }
    }
        public static void main(String args[]){
            try{
                proca();
            }
            catch(Exception e){
                System.out.println("exception caught:");
            }
            procb();
            procc();
    }
}
