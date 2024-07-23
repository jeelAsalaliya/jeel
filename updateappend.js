var fs = require('fs');

fs.appendFile('mynewfile1.txt','this is a my heart!',function(err){
    if(err) throw err;
    console.log("updated");
});