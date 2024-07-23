var fs = require('fs');

fs.open('mynewfile3.txt','w',function(err,file){
    if(err) throw err;
    console.log("open file saved!");
});