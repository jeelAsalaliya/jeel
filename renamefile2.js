var fs = require('fs');

fs.rename('mynewfile1.txt','jeel.txt',function(err){
    if(err) throw err;
    console.log("file renamed!");
});