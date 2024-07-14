const express = require('express');
const multer = require('multer');
const app = express();
const upload = multer({
    storage: multer.diskStorage({
        destination: function (req, file, cb)//call back
        {
            cb(null, "uploads");
        },
        filename: function (req, file, cb) {
            cb(null, file.fieldname + "_" + Date.now() + ".jpeg");
        }
    })
}).single("user_file");

app.post("/upload", upload, (req, res) => {
    res.send("uploaded done!");
});

app.listen(500);