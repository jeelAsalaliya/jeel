<html>
 <head>
  <title>associative array</title>
 </head>
 
 <body>
  <?php
  $employee = array(
  "Name"=>"Alex",
  "Email"=>"alex_jtp@gmail.com",
  "Age"=>21,
  "Gender"=>"Male"
  );
  
  foreach($employee as $key => $element)
  {
	  echo $key.":".$element;
	  echo "<br>";
  }
  ?>
  
  </body>
  </html>
  