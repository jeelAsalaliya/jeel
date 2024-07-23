import java.applet.Applet;
import java.awt.*;

public class AppletDemo extends Applet {
    Font f1;

    public void init() {
        f1 = new Font("arial", Font.BOLD, 24);
        setBackground(Color.red);
        setForeground(Color.blue);
    }

    public void paint(Graphics g) {
        g.drawString("good", 10, 50);
        g.setFont(f1);
        g.drawString("hello", 10, 100);
    }
}
