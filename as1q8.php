<html>
 <head>
  <title>factorial number</title>
 </head>
 
 <body>
 <?php
 function factorial($n){
	if($n<0)
	{
	 return "factorial is not defined for negative numbers";
	}elseif($n==0){
		return 1;
		}
		else{
		$result=1;
		
		for($i=1;$i<=$n;$i++){
			$result*=$i;
		}
		return $result;
	}
}
 $n=3;
 echo "factorial of $n is:".factorial($n);
 ?>
 </body>
 </html>