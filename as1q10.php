<html>
 <head>
  <title>fizz,buzz,fizzbuzz</title>
 </head>
 
 <body>
 <?php
 for($i=1;$i<=50;$i++)
 {
  if($i%3==0 && $i%5==0)
  {
   echo "FizzBuzz";
   echo "<br>";
  }elseif($i%3==0)
  {
   echo "Fizz";
   echo "<br>";
  }elseif($i%5==0)
  {
   echo "Buzz";
   echo "<br>";
  }else {
		echo $i."\n";
		echo "<br>";
	}
}
 ?>
 </body>
 </html>