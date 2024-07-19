<html>
 <head>
  <title>Continue</title>
 </head>
 
 <body>
  <?php
  for($i=1;$i<=3;$i++)
  {
	   for($j=1;$j<=3;$j++)
	   {
		    if(!($i == $j))
			{
				 Continue;
			}
			echo $i.$j;
			echo "<br>";
	   }
  }
  ?>
  
  </body>
  </html>
  