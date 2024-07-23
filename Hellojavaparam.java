import java.awt.*;
import java.applet.*;

/*
 * <applet code="Hellojavaparam" width=400 height=200>
 * <param name="String" value="Applet">
 * </applet>
 */
public class Hellojavaparam extends Applet {
    String str;

    public void init() {
        str = getParameter("String");
        if (str == null)
            str = "java";
        str = "Hello" + str;
    }

    public void paint(Graphics g) {
        g.drawString(str, 10, 100);
    }
}
