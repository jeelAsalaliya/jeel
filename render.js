const express = require('express');
const app = express();

app.get('', (req, res) => {
    res.send("<h1>hello,this is home page</h1><a href='/about'> GO TO ABOUT PAGE</a>");
});

app.get('/about', (req, res) => {
    res.send("<input type='text' placeholder='user name' value='${req.query.name}'/> <button> click me</button ><br><br><a href='/'>GO TO HOME PAGE</a>");
});



app.get('/help', (req, res) => {
    res.send([
        {
            name: "jeel",
            email: 'asalaliyajeel@gmail.com'
        },
        {
            name: "harshil",
            email: 'bhanderiharshil@gmail.com'
        },
        {
            name: "kashyap",
            email: 'kashyapsojitra@gmail.com'
        }


    ]);
});


app.listen(500);