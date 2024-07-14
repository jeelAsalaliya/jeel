<html>
 <head>
  <title>Local Variable</title>
 </head>
 
 <body>
  <?php 
  function local_var()
  {
	  $num = 45;
	  echo "Local Variable declared inside the function is: ".$num;
  }
  local_var();
  ?>
  
  </body>
  </html>