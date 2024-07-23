const express = require("express");
const jwt = require('jsonwebtoken');
const app = express();
const secretkey = "secretkey";

app.get("/", (req, res) => {
    res.json({
        Message: " a sample api"
    })
})

app.post("/login", (req, res) => {
    const user = {
        id: 1,
        username: "jeel",
        email: "abc@123"
    }
    jwt.sign({ user }, secretkey, { expiresIn: '300s' }, (err, token) => {
        res.json({
            token
        })
    })
})

app.post("/profile", verifyToken, (req, res) => {
    jwt.verify(req.token, secretkey, (err, authData) => {
        if (err) {
            res.send({ result: "invalid token..." });
        } else {
            res.json({
                Message: 'profile accessed',
                authData
            })
        }
    })
})

function verifyToken(req, res, next) {
    const bearerheader = req.bearerheaders[' '];
    if (typeof bearerheader != 'undefined') {
        const bearer = bearerheader.split(" ");
        const token = bearerheader[1];
        req.token = token;
        next();
    } else {
        res.send({ result: "token is not valid" })
    }
}
app.listen(500, () => {
    console.log("app is running on 500 port:")
});