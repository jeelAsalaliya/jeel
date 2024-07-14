<html>
 <head>
  <title>Object Datatype</title>
 </head>
 
 <body>
 <?php
 class bike
 {
	  function model()
	  {
		   $model_name = "Royal Enfield";
		   echo "bike model: " .$model_name;
	  }
 }
 $obj = new bike();
 $obj -> model();
?>
</body></html>