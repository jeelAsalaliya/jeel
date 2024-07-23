import java.util.Scanner;

public class stack {
    private int[] stackarray;
    private int top;
    private int maxsize;

    public stack(int size) {
        maxsize = size;
        stackarray = new int[maxsize];
        top = -1;
    }

    public void push(int item) {
        if (top == maxsize - 1) {
            System.out.println("stack not overflow");
            return;
        }
        stackarray[++top] = item;
        System.out.print("pushed=" + item + "stack");
    }

    public int pop() {
        if (top == -1) {
            System.out.println("stack underflow not");
            return -1;
        }
        int poppeditem = stackarray[top--];
        System.out.println("poppeditem" + poppeditem + "stack");
        return poppeditem;
    }

    public void display() {
        if (top == -1) {
            System.out.println("stack is empty");
            return;
        }
        System.out.println("stack elements");

        for (int i = top; i >= 0; i--) {
            System.out.println(stackarray[i]);
        }
    }

    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter size stack:");
        int size = scanner.nextInt();
        stack stack = new stack(size);

        int choice;

        do {
            System.out.println("menu:::");
            System.out.println("0 exit");
            System.out.println("1 push");
            System.out.println("2 pop");
            System.out.println("3 display");
            System.out.println("enter your choice::");

            choice = scanner.nextInt();

            switch (choice) {
                case 0:
                    System.out.println("existing program");
                    break;
                case 1:
                    System.out.println("enter the push");
                    int item = scanner.nextInt();
                    stack.push(item);
                    break;
                case 2:
                    stack.pop();
                    break;
                case 3:
                    stack.display();
                    break;

                default:
                    System.out.println("Invalid choice:");
            }
        } while (choice != 0);
        scanner.close();
    }
}
