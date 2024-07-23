var fs = require('fs');
var readStream = fs.createReadStream("D:\sybca08\jquery");

readStream.on('open',function(){
    console.log('the file is open');
});