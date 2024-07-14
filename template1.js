
const express = require('express');
const path = require('path');

const app = express();

app.set("view engine", "ejs");

app.get('/profile', (_, res) => {
    const user = {
        name: 'jeel asalaliya',
        email: 'aslaliyajeel@gmail.com',
        city: 'surat',
        country: 'USA',
        skills: ['php', 'js', 'c++']
    }
    res.render('profile', { user });
});
app.get('/login', (_, res) => {
    res.render('login');
});


app.listen(500);