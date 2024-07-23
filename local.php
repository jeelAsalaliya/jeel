<html>
 <head>
  <title>Local Scope</title>
 </head>
 
 <body>
  <?php
  function mytest(){
   $x = 5;
 echo "<p> Variable x inside  function is: $x</p>";
 }
 mytest();
 echo "<p> variable x outside function is: $x</p>";
  ?>
  </body>
  </html>