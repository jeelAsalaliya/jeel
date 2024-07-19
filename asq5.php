<html>
 <head>
  <title>table</title>
 </head>
 
 <body>
 <?php
 echo "<table cellpadding='3px' cellspacing='0px'>";
 
 for($i=1;$i<=6;$i++){
	 echo "<tr>";
	 for($j=1;$j<=5;$j++){
		 echo "<td>".$i."*".$j."=".($i*$j)."</td>";
	 }
	 echo "<tr>";
 }
 echo "</table>";
 ?>
 </body>
 </html>