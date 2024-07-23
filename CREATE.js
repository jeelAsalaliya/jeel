const fs=require('fs');
const file = 'example.txt';
const data = 'this is jeel asalaliya';

fs.writeFile('example.txt',data,(err)=>{
    if(err){
        console.log('error created',err);
    }else{
        console.log('file created');
    }
});