const express = require('express');
const app = express();

app.get('', (req, res) => {
    console.log("data sent by browser");
    res.send("welcome," + req.query.name);
});
app.get('/about', (req, res) => {
    res.send("about page");
});
app.get('/help', (req, res) => {
    res.send("help page");
});

app.listen(5000);