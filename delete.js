const dbConnection = require('./mongodb');
const deleteData = async () => {
    let data = await dbConnection();
    let result = await data.deleteMany(
        {
            name: 'max 3'
        }
    )
    console.warn(result);
    if (result.acknowledged) {
        console.log("recorded deleted")
    }

}
deleteData();