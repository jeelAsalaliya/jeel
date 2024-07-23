import java.applet.*;
import java.awt.*;
/*
<applet code=hodi1 height=500 width=500>
</applet>
*/
public class hodi1 extends Applet implements Runnable
{
	Thread t;
	int apoints[]=new int[4];
	int bpoints[]=new int[4];
	int xpoints[]={10,25,100,120};
	int ypoints[]={80,120,120,80};
	int npoints;
	int x1,y1,x2,y2;
	int a1points[]=new int[3];
	int b1points[]=new int[3];
	int n;
	public void init()
	{
		x1=12;
		y1=80;
		x2=12;
		y2=10;
		setBackground(Color.red);
		for(int i=0;i<4;i++)
		{
			apoints[i]=xpoints[i];
			bpoints[i]=ypoints[i];
		}
		npoints=apoints.length;
		a1points[0]=12;
		b1points[0]=50;
		a1points[1]=24;
		b1points[1]=60;
		a1points[2]=12;
		b1points[2]=10;
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
		x1++;x2++;
		a1points[0]++;
		a1points[1]++;
		a1points[2]++;
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
		g.drawLine(x1,y1,x2,y2);
		g.setColor(Color.blue);
		g.fillPolygon(a1points,b1points,3);
	}
}