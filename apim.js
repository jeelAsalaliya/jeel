


const express = require('express');
const dbConnection = require('./mongodb');
const mongodb = require('mongodb');
const app = express();
app.use(express.json());

app.get('/', async (req, res) => {
    let data = await dbConnection();
    data = await data.find().toArray();
    console.log(data);
    res.send(data);
});

app.post('/', async (req, res) => {
    let data = await dbConnection();
    let result = await data.insertOne(req.body);
    //data = await data.find().toArray();
    res.send(result);
});


app.put("/:name", async (req, res) => {
    let data = await dbConnection();
    let result = await data.updateOne(
        {
            name: req.params.name
        },
        {
            $set: req.body
        });

    res.send({ result: "update" });
});

app.delete("/:id", async (req, res) => {
    console.log(req.params.id);
    const data = await dbConnection();
    const result = await data.deleteOne({ _id: new mongodb.ObjectId(req.params.id) });
    res.send(result);
});
app.listen(500);