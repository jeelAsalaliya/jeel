import java.awt.*;
import java.applet.*;
/*<applet 
	code=SimpleBanner1.class
	width=400
	height=200
	>
</applet>*/
public class SimpleBanner1 extends Applet implements Runnable 
{
	String msg = " A Simple Moving Banner.";
	Thread t = null;
	int x,y;
	//int state;
	boolean stopFlag;
	// Set colors and initialize thread.
	public void init() 
	{
		setBackground(Color.cyan);
		setForeground(Color.red);
		x=0;
	}
	// Start thread
	public void start() 
	{
		t = new Thread(this);
		stopFlag = false;
		x=0;
		t.start();
	}
	// Entry point for the thread that runs the banner.
	public void run() 
	{
		//char ch;
		// Display banner
		for( ; ; )
		{
		try 
		{
			repaint();
			Thread.sleep(50);
			x++;
			if(x==400)
				x=0;
			if(stopFlag)
			break;
		} 
		catch(InterruptedException e) 
		{}
		}
	}
	// Pause the banner.
	public void stop() 
	{
		stopFlag = true;
		t = null;
	}
	// Display the banner.
	public void paint(Graphics g) 
	{
		g.drawString(msg, x, 30);
	}
}





