const fs = require('fs');
const oldfilename = 'main1.js';
const newfilename = 'demo.js';

fs.rename(oldfilename,newfilename,(err)=>{
    if(err){
        console.log('error',err);
    }else{
        console.log('file renamed');
    }
});