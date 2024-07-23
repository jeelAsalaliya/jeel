import java.awt.*;
import java.applet.*;

/*<applet code="shape" width=2000 height=2000> </applet>*/
public class shape extends Applet {
    public void paint(Graphics g) {
        g.drawRect(183, 123, 241, 241);
        g.setColor(Color.yellow);
        g.fillOval(183, 123, 241, 241);
        setBackground(Color.white);
        g.setColor(Color.black);
        g.fillOval(240, 180, 30, 30);
        g.fillOval(325, 180, 30, 30);
        g.drawArc(225, 219, 150, 100, 180, 180);
    }
}