import java.awt.*;
import java.applet.*;
import java.net.*;
/*
<applet code="Bases" width=300 height=50>
</applet>
*/
public class Bases extends Applet
{
// Display code and document bases.
	Image picture;
	public void init()
	{
		picture=getImage(getDocumentBase(),"het.jpg");
	}
	public void paint(Graphics g) 
	{
		String msg;
		URL url = getCodeBase(); // get code base
		msg = "Code base: " + url.toString();
		g.drawString(msg, 10, 20);
		url = getDocumentBase(); // get document base
		msg = "Document base: " + url.toString();
		g.drawString(msg, 10, 40);
		g.drawImage(picture,10,60,this);
	}
}
