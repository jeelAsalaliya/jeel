import java.awt.*;
import java.applet.*;

/*<applet code="simpleApplet" width=200 height=600></applet>*/
public class simpleApplet extends Applet {
    public void paint(Graphics g) {
        g.drawString("A simple applet", 20, 20);
    }
}