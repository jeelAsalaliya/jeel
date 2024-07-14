
const express = require('express');
const path = require('path');

const app = express();

app.set("view engine", "ejs");

app.get('/profile', (req, res) => {
    const user = {
        name: 'jeel asalaliya',
        email: 'aslaliyajeel@gmail.com',
        city: 'surat'
    }
    res.render('profile', { user });
});

app.listen(500);