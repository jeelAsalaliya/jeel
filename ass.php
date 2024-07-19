
<?php
 print "Hello, World!";print "Number: " . 5;
 print "String: " . "Hello";
 print "Variable: " . $var;
 print "Array: " . print_r($arr);
 print "Object: " . json_encode($obj);
 print "Sum: " . 2 + 3;
 print "Concat: " . "Hello " . "World!";
 print "Ternary: " . ($var ? "true" : "false");
 print "Array index: " . $arr[0];
 print "Object property: " . $obj->prop;
 print "Function call: " . myFunction();
 print "Conditional: " . ($var ? "yes" : "no");
 print "Loop: "; for ($i = 0; $i < 5; $i++) { print $i . " "; }
 print "String length: " . strlen("Hello, World!");

?>