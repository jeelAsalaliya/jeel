const mysql = require('mysql');
const con = mysql.createConnection({
    host: "localhost",
    username: "root",
    password: "",
    database: "ajk"
});
con.connect((err) => {
    if (err) {
        console.warn("error")
    }
    else {
        console.warn("connected")
    }
});
con.query("select * from jeelas", (err, result) => {
    console.log("result", result);
});


