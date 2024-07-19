<html>
 <head>
  <title> pattern</title>
 </head>
 
 <body>
 <?php
 $nums_rows=7;
 for($i=1;$i<=floor($nums_rows/2)*1;$i++){
	  for($j=0;$j<$i;$j++)
	  {
		   echo "*";
	  }
	  echo "<br>";
 }
 
 for($i<=floor($nums_rows/2);$i>=1;$i--){
	  for($j=1;$j<=$i;$j++)
	  {
		  echo "*";
	  }
	  echo "<br>";
 }
 ?>
 
 </body>
 </html>