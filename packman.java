import java.awt.*;
import java.applet.*;
/*<applet 
	code="packman.class" 
	width=400
	height=400>
</applet>*/
public class packman extends Applet implements Runnable
{
	Thread t;
	int flag;
	int x;
	public void init()
	{
		x=10;
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
			if(i%2==0)
				flag=1;
			else
				flag=0;
			x+=2;
			try
			{
				t.sleep(500);
			}
			catch(Exception e)
			{}
			repaint();
		}
	}			
	public void paint(Graphics g)
	{
		g.setColor(Color.red);
		if(flag==1)
			g.fillArc(x,50,50,50,45,315);
		else
			g.fillArc(x,50,50,50,15,345);
		if(x>=70)
		{	
			g.setColor(Color.white);
			g.drawOval(80,60,0,0);
		}
		else
			g.drawOval(80,60,10,10);
		if(x>=80)
		{
			g.setColor(Color.white);
			g.drawOval(110,60,0,0);
		}
		else
			g.drawOval(110,60,10,10);	
	}
}