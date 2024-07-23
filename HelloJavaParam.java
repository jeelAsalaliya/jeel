import java.awt.*;
import java.applet.*;

public class HelloJavaParam extends Applet {
    String str;

    public void init() {
        str = getParameter("string");

        if (str == null)
            str = "java";
        str = "hello" + str;
    }

    public void paint(Graphics g) {
        g.drawString(str, 10, 100);
    }
}
