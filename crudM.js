const fs = require('fs');
const path = require('path');
const dirPath = path.join(__dirname, 'CRUD');
const filePath = '${apple.txt}';
//fs.writeFileSync(filePath, 'this is a simple text file');


//fs.readFile(filePath, 'utf8', (err, item) => {
//  console.log(item)
//})

//fs.appendFile(filePath, 'and file name apple.txt', (err) => {
//  if (err) console.log("file is updated!")
//})

fs.rename(filePath, '${fruit.txt}', (err) => {
    if (err) console.log("file is renamed!")
})

fs.unlinkSync('${fruit.txt}');