const mongoose = require('mongoose');

const productsSchema = new mongoose.Schema({
    name: String,
    email: String,
    password: String,
    userid: String,
    company: String
});

module.exports = mongoose.model("products", productsSchema);