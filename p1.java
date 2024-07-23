public class p1 {
    public static void main(String args[]) {
        String name = "Jack Parker";
        name = name.toLowerCase();
        System.out.println(name);

        String text = "to my Friend";
        text = text.replace(" ", "_");
        System.out.println(text);

        String letter = "Dear </name/>,Thanks a lot!";
        letter = letter.replace("</name/>", "Jeel");
        System.out.println(letter);

        String myString = "double and triple spaces...";
        System.out.println(myString.indexOf("  "));
        System.out.println(myString.indexOf("   "));

        String myletter = "Dear Harry\n\t";
        System.out.println(myletter);

        int a = 29;
        if (a > 18) {
            System.out.println("you have driven");
        } else {
            System.out.println("you are underage!");
        }
    }
}
