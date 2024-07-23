import java.awt.*;
import java.applet.*;
import java.awt.event.*;
/*<applet code=Btnclick.class height=600 width=600></applet>*/
public class Btnclick extends Applet implements ActionListener
{
	Button b1,b2,b3;
	public void init()
	{
		b1=new Button("red");
		b2=new Button("yellow");
		b3=new Button("blue");
		add(b1);
		add(b2);
		add(b3);
		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
	}
	public void actionPerformed(ActionEvent ae)
	{
		if(ae.getSource()==b1)
			setBackground(Color.red);
		if(ae.getSource()==b2)
			setBackground(Color.yellow);
		if(ae.getSource()==b3)
			setBackground(Color.blue);
	}
}