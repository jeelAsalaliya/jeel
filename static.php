<html>
 <head>
  <title>Static Variable</title>
 </head>
 
 <body>
  <?php
  function static_var()
  {
	   static $num1 =3;
	   $num2 =6;
	   
	   $num1++;
	   $num2++;
	   
	   echo "Static: ".$num1."<br>";
	   echo "non-Static: ".$num2."<br>";
  }
  static_var();
  static_var();
  ?>
  
  </body>
  </html>