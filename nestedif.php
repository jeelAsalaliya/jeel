<html>
 <head>
  <title>Nested if</title>
 </head>
 
 <body>
  <?php
  $a = 34;
  $b = 56;
  $c = 45;
  
  if($a < $b)
  {
	   if($a<$c)
	   {
		   echo "$a is smaller than $b and $c";
	   }
  }
  ?>
  
  </body>
  </html>