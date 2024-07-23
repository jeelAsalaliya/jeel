<html>
 <head>
  <title>for loop</title>
 </head>
 
 <body>
 <?php
 echo "<table border='2'>";
 
 for($i=1;$i<=10;$i++)
 {
  echo "<tr>";
  for($j=1;$j<=10;$j++)
  {
   echo "<td>".($i*$j)."</td>";
   }
   echo "</tr>";
  }
  echo "</table>";
   ?>
   
   </body>
   </html>