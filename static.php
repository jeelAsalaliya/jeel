<html>
 <head>
  <title>Static</title>
 </head>
 
 <body>
 <?php
 function mytest(){
 static $x = 0;
 echo $x;
 $x++;
 }
 
 mytest();
 echo "<br>";
 mytest();
 echo "<br>";
 mytest();
 ?>
 
 </body>
 </html>