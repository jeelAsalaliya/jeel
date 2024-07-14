import express from 'express';

const app = express()

app.get('/api/products', (req, res) => {
    const products = [
        {
            id: 1,
            name: "table wooden",
            price: 200
        },
        {
            id: 2,
            name: "table glass",
            price: 250
        }
    ]


    if (req.query.search) {
        const filterProducts = products.filter(product => product.name.includes(req.query.search))
        res.send(filterProducts);
        return;

    }
    setTimeout(() => {
        res.send(products);
    }, 5000);
})

const port = process.env.PORT || 5000;
app.listen(port, () => {
    console.log("server running on port ${port}");
});
