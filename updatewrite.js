var fs = require('fs');

fs.writeFile('mynewfile3.txt','this is a my car',function(err){
   if(err) throw err;
   console.log("replaced!"); 
});