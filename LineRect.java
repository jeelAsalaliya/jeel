import java.awt.*;
import java.applet.*;
/*<applet code="LineRect" width=200 height=60>
</applet>*/
public class LineRect extends Applet 
{
	public void paint(Graphics g)
	{
		g.drawLine(115,85,359,85);
		g.drawRect(187,95,400,331);
		g.drawOval(187,95,400,331);
		g.setColor(Color.red);
		g.fillRect(33,23,171,105);
		g.drawRoundRect(434,114,534,117,20,20);
		g.setColor(Color.yellow);
		g.fillOval(69,65,144,113);
	}
}



