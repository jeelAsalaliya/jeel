const express = require('express');
const path = require('path');

const app = express();

const publicPath = path.join(__dirname, 'public');
app.get('', (_, res) => {
    res.sendFile(' "${publicPath}"/ index.html')
});
app.get('/about', (_, res) => {
    res.sendFile("{publicPath}" / about.html)
});
app.get('/help', (_, res) => {
    res.sendFile("${publicPath}" / help.html)
});
app.get('*', (_, res) => {
    res.sendFile("${publicPath}" / pagenotfound.html)
});
//app.use(express.static(publicPath));
app.listen(450);