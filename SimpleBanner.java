import java.awt.*;
import java.applet.*;
/*<applet 
	code=SimpleBanner.class
	width=400
	height=200
	>	
</applet>*/
public class SimpleBanner extends Applet implements Runnable 
{
	String msg = " A Simple Moving Banner.";
	Thread t = null;
	int state;
	boolean stopFlag;
	// Set colors and initialize thread.
	public void init() 
	{
		setBackground(Color.cyan);
		setForeground(Color.red);
	}
	// Start thread
	public void start() 
	{
		t = new Thread(this);
		stopFlag = false;
		t.start();
	}
	// Entry point for the thread that runs the banner.
	public void run() 
	{
		char ch;
		// Display banner
		for( ; ; )
		{
		try 
		{
			repaint();
			Thread.sleep(250);//hello
			ch = msg.charAt(0);//h
			msg = msg.substring(1, msg.length());//ello
			msg += ch;//ello+h=>elloh
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
		g.drawString(msg, 50, 30);
	}
}