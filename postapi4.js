const express = require('express');
require('./postapi');
const Product = require('./postapi2');

const app = express();
app.use(express.json());

app.get("/search/:key", async (req, res) => {
    console.log(req.params.key);
    let data = await Product.find({
        "$or": [
            { "name": { $regex: req.params.key } },
            { "brand": { $regex: req.params.key } },
            { "category": { $regex: req.params.key } }
        ]
    });
    res.send(data)
})

app.listen(500);