const express = require('express');
const con = require('./config');
const app = express();
app.use(express.json());

app.get("/", (req, res) => {
    con.query("select * from jeelas", (err, result) => {
        if (err) {
            res.send("error in api")
        }
        else {
            res.send(result)
        }
    });
});

app.post("/insert", (req, res) => {
    const data = req.body;
    con.query("insert into jeelas set ?", data, (error, result, fields) => {
        if (err) throw error;
        res.send(result)
    });
});

app.put("/update", (req, res) => {
    const data = ["tony", "0000", "reader", 10];
    con.query("UPDATE jeelas SET name=?,password=?,user_type=? where id = ?", data, (err, result, fields) => {
        if (err) throw error;
        res.send(result)
    });
});

app.delete("/delete", (req, res) => {
    con.query("DELETE from jeelas WHERE id =" + req.params.id, (error, result));
    res.send(req.params.id);
    if (err) throw error;
    res.send(result)

});
app.listen(500);