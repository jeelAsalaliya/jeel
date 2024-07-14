const express = require('express');
const reqFilter = require('./middleware2')
const app = express();
const route = express.Router();

//const reqFilter = (req, res, next) => {
//console.log('reqFilter');
//  if (!req.query.age) {
//    res.send("please provide age")
//}
//else if (req.query.age < 18) {
//  res.send("you are under aged")
//}
//else {
//  next();
//}

//}
//app.use(reqFilter)

route.use(reqFilter);
app.get('/', (req, res) => {
    res.send('welcome to home page');
});

app.get('/users', (req, res) => {
    res.send('welcome to uses page')
});

route.get('/about', (req, res) => {
    res.send('welcome to about page');
});

route.get('/contact', (req, res) => {
    res.send('welcome to contact page');
});

app.use('/', route);
app.listen(5000);