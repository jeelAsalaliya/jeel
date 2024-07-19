<html>
 <head>
  <title>print </title>
 </head>
 
 <body>
 <?php
 function floydTriangle($n){
	  $num = 1;
	  
	  for($i=1;$i<=$n;$i++){
		   for($j=1;$j<=$i;$j++){
			   echo $num." ";
			   $num++;
		   }
		   echo "<br>";
	  }
 }
 
 echo "floyd Triangle with 11 rows:<br>";
 floydTriangle(11);
 ?>
 
 </body>
 </html>