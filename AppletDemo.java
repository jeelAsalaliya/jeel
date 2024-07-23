import java.applet.*;
import java.awt.*;

/*<applet code="AppletDemo" width=200 height=600></applet>*/
public class AppletDemo extends Applet {
    Font f1;

    public void init() {
        f1 = new Font("Arial", Font.BOLD, 24);
        setBackground(Color.red);
        setBackground(Color.blue);
    }

    public void paint(Graphics g) {
        g.drawString("good", 10, 50);
        g.setFont(f1);
        g.drawString("Hello", 10, 100);
    }
}