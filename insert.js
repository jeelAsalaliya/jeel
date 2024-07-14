const dbConnection = require('./mongodb');
const insert = async () => {
    const db = await dbConnection();
    const result = await db.insertMany(
        [
            { name: 'max 1', brand: 'micromax', price: 220, category: 'mobile' },
            { name: 'max 2', brand: 'micromax', price: 320, category: 'mobile' },
            { name: 'max 3', brand: 'micromax', price: 420, category: 'mobile' },
            { name: 'max 1', brand: 'micromax', prise: 220, catagory: 'mobile' },
            { name: 'max 2', brand: 'micromax', prise: 320, catagory: 'mobile' },
            { name: 'max 3', brand: 'micromax', prise: 420, catagory: 'mobile' }
        ]
    );
    if (result.acknowledged) {
        console.log("data inserted")
    }
}
insert();