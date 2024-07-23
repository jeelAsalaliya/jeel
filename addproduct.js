import React from "react";

const addproduct = () => {
    const [name, setName] = React.UseState("");
    const [price, setPrice] = React.UseState("");
    const [Category, setCategory] = React.UseState("");
    const [Company, setCompany] = React.UseState("");
    const [error, setError] = React.UseState(false);

    const addproduct = async () => {
        console.warn(!name);
        if (!name || !price || !Category || !Company) {
            setError(true);
            return false
        }

        console.warn(name, price, Category, Company);
        const userid = JSON.parse(localStorage.getItem("user"))._id;
        let result = await fetch("localhost:500/add-product", {
            method: 'post',
            body: JSON.stringify({ name, price, Category, Company, userid }),
            Headers: {
                'content-type': "application/json",
               // authorization: 'bearer $(JSON.parse{localStorage.getItem('token')})'
    }
        });
        result = await result.json();
        console.warn(result);
    }

    return (
        <div className="product">
            <h1>
                Add Product
            </h1>
            <input type="text" placeholder="enter Product Name:" className="inputbox" value={name} onChange={(e) => { setName(e.target.value) }} />
            {error && !name && <span className="invalid-input">enter Valid Name:</span>}

            <input type="text" placeholder="enter Product Price:" className="inputbox" value={price} onChange={(e) => { setPrice(e.target.value) }} />
            {error && !price && <span className="invalid-input">enter Valid Price:</span>}

            <input type="text" placeholder="enter Product Category:" className="inputbox" value={Category} onChange={(e) => { setCategory(e.target.value) }} />
            {error && !Category && <span className="invalid-input">enter Valid Category:</span>}

            <input type="text" placeholder="enter Product Company:" className="inputbox" value={Company} onChange={(e) => { setCompany(e.target.value) }} />
            {error && !Company && <span className="invalid-input">enter Valid Company:</span>}

            <button onClick={addproduct} className="appbutton"> Add Product</button>
        </div >
    )
}
export default addproduct;