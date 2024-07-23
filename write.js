var fs = require('fs');

fs.writeFile('mynewfile4.txt','hello mini!',function(err){
    if(err) throw err;
    console.log("write file complited!");
});