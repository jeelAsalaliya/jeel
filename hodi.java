import java.applet.*;
import java.awt.*;
/*
<applet code=hodi height=500 width=500>
</applet>
*/
public class hodi extends Applet implements Runnable
{
	Thread t;
	int apoints[]=new int[4];
	int bpoints[]=new int[4];
	int xpoints[]={10,25,100,120};
	int ypoints[]={80,120,120,80};
	int npoints;
	public void init()
	{
		setBackground(Color.red);
		for(int i=0;i<4;i++)
		{
			apoints[i]=xpoints[i];
			bpoints[i]=ypoints[i];
		}
		npoints=apoints.length;
	}
	public void start()
	{
		Thread t=new Thread(this);
		t.start();
	}
	public void run()
	{
	   for(;;)
	   {
		apoints[0]++;
		apoints[1]++;
		apoints[2]++;
		apoints[3]++;
		try
		{
			t.sleep(100);
		}
		catch(Exception e)
		{ }
		repaint();
	    }
	}
	public void paint(Graphics g)
	{		
		g.setColor(Color.yellow);
		g.fillPolygon(apoints,bpoints,npoints);
	}
}
				
