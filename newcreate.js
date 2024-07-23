var fs = require('fs');

fs.appendFile('mynewfile2.txt', 'hello jerry!', function (err) {
    if (err) throw err;
    console.log("created file saved!");
});