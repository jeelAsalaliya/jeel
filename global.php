<html>
 <head>
  <title>Global Scope</title>
 </head>
 
 <body>
  <?php
  $x = 5;
  
  function Mytest(){
  echo "<p>Variable x inside function is: $x </p>";
  }
  Mytest();
  echo "<p>Variable x outside function is: $x </p>";
  ?>
  
 </body>
 </html>