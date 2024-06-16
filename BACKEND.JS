import express from 'express';
const app = express();

app.use(express.static('dist'));

app.get('/api/jokes', (req, res) => {
    const jokes = [{ "id": 1, "title": "a JOke", "content": "this is a joke" },
    { "id": 2, "title": "another JOke", "content": "this is another joke" },
    { "id": 3, "title": "a third JOke", "content": "this is third joke" },
    { "id": 4, "title": "a  fourth JOke", "content": "this is a fourth joke" },
    { "id": 5, "title": "a fifth JOke", "content": "this is a fifth  joke" }];
    res.send(jokes)
});

const port = process.env.PORT || 5000;

app.listen(port, () => {
    console.log('server at https://localhost:${port}');
}
);
