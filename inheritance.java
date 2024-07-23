import java.util.*;

class student {
    int rno;
    String name;
    int mark[];
    int total;

    student() {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter rno:");
        rno = sc.nextInt();
        sc.nextLine();
        System.out.println("enter name:");
        name = sc.nextLine();
        mark = new int[3];
        System.out.println("enter marks:");

        for (int i = 0; i < 3; i++) {
            mark[i] = sc.nextInt();
        }
        total = 0;
    }

    void total() {
        for (int i = 0; i < 3; i++) {
            total = total + mark[i];
        }
    }

    void display() {

        System.out.println("rollno=" + rno);
        System.out.println("student.disp");
    }
}
