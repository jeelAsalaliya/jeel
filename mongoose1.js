const mongoose = require('mongoose');
mongoose.connect("mongodb://localhost:27017/Ecomm");
const ProductSchema = new mongoose.Schema({
    name: String,
    price: Number,
    brand: String,
    category: String
});

const saveInDB = async () => {
    const Product = mongoose.model('product', ProductSchema);
    let data = new Product({ name: "note pro 3", price: 450, brand: 'maxi' });
    let result = await data.save();
    console.log(result);
}


const updateInDB = async () => {
    const Product = mongoose.model('product', ProductSchema);
    let data = await Product.updateOne({
        name: 'note pro 3'
    },
        {
            $set: { price: 50000, name: "note pro5" }
        })
    console.log(data);
}
const deleteInDB = async () => {
    const Product = mongoose.model('product', ProductSchema);
    let data = await Product.deleteOne({
        name: "note pro5"
    })
    console.log(data)
}


const findInDB = async () => {
    const Product = mongoose.model('product', ProductSchema);
    let data = await Product.find({name:'m8'});
    console.log(data)
}

findInDB();