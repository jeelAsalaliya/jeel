class Box{
    double width;
    double height;
    double depth;

    Box(double w,double h,double d){
        width=w;
        height=h;
        depth=d;
    }

    public String toString(){
        return "dimension are:\n\n" +width+ "by:\n" +depth+ "by:\n" +height+ "." ;
    }
}

class toStringdemo{
    public static void main(String args[]){
        Box b = new Box(10,12,14);
        String s = "box b:"+b;
        System.out.println(b);
        System.out.println(s);
    }
}