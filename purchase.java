import java.util.Scanner;

public class purchase {
    private String product_id;
    private String product_name;
    private double unit_price;
    private int total_qty;
    private double total_price;
    private static double totalBill = 0;

    public purchase(String product_id, String product_name, double unit_price, int total_qty) {
        this.product_id = product_id;
        this.product_name = product_name;
        this.unit_price = unit_price;
        this.total_qty = total_qty;
        this.total_price = unit_price * total_qty;
        totalBill += this.total_price;
    }

    public void display() {
        System.out.printf("%-5s%-10s%-7.2f %-5d%-8.2f", product_id, product_name, unit_price, total_qty, total_price);
    }

    public static void display_totalBill() {
        System.out.println("--------");
        System.out.printf("totalBill:", totalBill);
    }

    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter detail purchase:");
        System.out.println("pid name:");

        purchase p1 = new purchase("p1", "t-shirt", 500, 3);
        purchase p2 = new purchase("p2", "cap", 100, 5);
        purchase p3 = new purchase("p3", "watch", 2000, 11);
        p3.display();
        purchase.display_totalBill();

    }
}