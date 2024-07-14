const fs = require('fs');
const path = require('path');


const dirPath = path.join(__dirname, 'files');
console.warn(dirPath)
//for (i = 0; i < 5; i++) {
//  fs.writeFileSync(dirPath + "/apple" + i + ".txt", "simple text file");
//}

fs.readdir(dirPath, (err, files) => {
    files.forEach((item) => {
        console.log('file name is:', item)
    })
})