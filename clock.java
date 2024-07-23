import java.awt.*;
import java.applet.*;

/*<applet code=clock.class width=400 height=200></applet> */
public class clock extends Applet implements Runnable {
    String msg;
    Thread t = null;
    boolean StopFlag;
    int i, m, s;

    public void init() {
        setBackground(Color.cyan);
        setForeground(Color.red);
        i = 0;
        m = 0;
        s = 0;
    }

    public void start() {
        t = new Thread(this);
        StopFlag = false;
        t.start();
    }

    public void run() {
        for (int i = 0; i <= 24; i++) {
            for (int m = 0; m <= 60; m++) {
                for (int s = 0; s <= 60; s++) {
                    repaint();
                    try {
                        t.sleep(1000);
                    } catch (Exception e) {
                    }
                    msg = "h:m:s" + i + ":" + m + ":" + s;
                    if (s > 60)
                        s = 0;
                }
                if (m > 60)
                    m = 0;
            }
            if (i > 24)
                i = 0;
        }
    }

    public void Stop() {
        StopFlag = true;
        t = null;
    }

    public void paint(Graphics g) {
        g.drawString(msg, 30, 30);
    }
}