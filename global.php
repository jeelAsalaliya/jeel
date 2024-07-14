<html>
 <head>
  <title>Global Variable</title>
 </head>
 
 <body>
  <?php
  $name = "sanaya sharma";
  function global_var()
  {
	  global $name;
	  echo "Variable inside the function: ". $name;
	  echo "<br>";
  }
  global_var();
  echo "Variable outside the function: ".$name;
  ?>
   </body>
   </html>