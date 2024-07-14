const express = require('express');
const app = express();

app.get('', (req, res) => {
    res.send("hello,this is home page");
});

app.get('/about', (req, res) => {
    res.send("hello,this is a about page")
});



app.get('/help', (req, res) => {
    res.send("hello,this is a help page")
});


app.listen(500);