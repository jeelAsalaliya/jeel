import java.awt.*;
import java.applet.*;
/*<applet code="HelloJavaParam1"
		width=400
		height=200
		>
	<param name="number"
		value="5"> 
</applet>*/
public class HelloJavaParam1 extends Applet
{
	String str,str1;
	int flag=0;
	public void init()
	{
		str=getParameter("number");
		if(str==null)
			str1="0";
		else
		{
		int n=Integer.parseInt(str);
		if(n%2==0)
			flag=1;
		else	
			flag=0;
		str1=Integer.toString(n);
		}
		//str="hello"+str;
	}
	public void paint(Graphics g)
	{
		if(flag==1)
			g.setColor(Color.blue);
		else
			g.setColor(Color.red);
		g.drawString(str1,10,100);
	}
}
