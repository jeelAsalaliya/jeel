const { MongoClient } = require('mongodb');
//const { } = require('mongodb').Mongoclient;
const url = 'mongodb://localhost:27017';
const database = 'Ecomm';

const client = new MongoClient(url);

async function dbConnection() {
    let result = await client.connect();
    let db = result.db(database);
    return db.collection('product');

    //let response = await collection.find({ name: 'm45' }).toArray();
    //console.log(response);
}

module.exports = dbConnection;