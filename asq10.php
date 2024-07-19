<html>
 <head>
  <title>fizzbuzz</title>
 </head>
 
 <body>
 <?php
 for($i=1;$i<=50;$i++){
	 if($i%3==0 && $i%5==0){
		 echo "FIZZBUZZ\n";
		 echo "<br>";
	 }elseif($i%3==0){
		 echo "FIZZ\n";
		 echo "<br>";
		 
	 }
	 elseif($i%5==0){
		 echo "BUZZ\n";
		 echo "<br>";
	 }
	 else{
		 echo $i."\n";
		 echo "<br>";
	 }
 }
 ?>
 </body>
 </html>