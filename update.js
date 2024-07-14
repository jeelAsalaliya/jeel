const dbconnect = require('./mongodb')
const updateData = async () => {
    let data = await dbconnect();
    let result = await data.updateOne(
        { name: 'max 3' },
        {
            $set: { name: 'max pro 5' }
        }
    );
    console.warn(result);

}

updateData();