<html>
 <head>
  <title>chess board</title>
  <style>
  table{
	width:270px;
	border-collapse:collapse;
}
 td{
	width:30px;
	height:30px;
	text-align:center;
}
 .white{
	background-color:#ffffff;
	}
	.black{
	background-color:#000000;
}
</style>
 </head>
 
 <body>
 <table border="2">
  <?php
  for($i=1;$i<=9;$i++)
  {
   echo "<tr>";
   for($j=1;$j<=9;$j++)
   {
    if(($i+$j)%2==0){
		echo "<td class='white'></td>";
	}else{
		echo "<td class='black'></td>";
	}
}
 echo "</tr>";
}
  ?>
  </table>
  </body>
  </html>