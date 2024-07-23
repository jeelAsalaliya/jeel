import java.awt.*;
import java.applet.*;
/*<applet 
	code="Colorchange.class" 
	width=400
	height=400>
</applet>*/
public class Colorchange extends Applet implements Runnable
{
	int flag;
	Thread t;
	int x,y,a,b;
	public void init()
	{
		x=10; a=350;
	}
	public void start()
	{
		t=new Thread(this);
		t.start();
	}
	public void run()
	{
		for(int i=1;i<=10000;i++)
		{
			x++;
			a--;
			if(i%2==0)
				flag=1;
			else
				flag=0;
			try
			{
				t.sleep(100);
			}
			catch(Exception e)
			{}
			repaint();
		}
	}	
	public void paint(Graphics g)
	{
		if(flag==1)
			setBackground(Color.red);
		else
			setBackground(Color.blue);
		g.setColor(Color.yellow);
		g.fillOval(x,50,50,50);
		g.fillOval(a,50,50,50);	
		if(a<=x)
			g.drawString("Hello World",180,150);
	}
		
}