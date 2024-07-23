import React, { UseEffect } from "react";

const productList = () => {
    const [products, setproducts] = React.UseState([]);
    UseEffect(() => {
        getproducts();
    }, []);

    const getproducts = async () => {
        let result = await fetch('localhost:500/products', {
            // headers: {
            //   authorization: 'bearer $(JSON.parse(localStorage.getItem('token')))'
            //}
        });
        result = await result.json();
        setproducts(result);
    }
    const deleteproduct = async (id) => {
        let result = await fetch("localhost:500/product/${id}", {
            method: "delete"
            // headers: {
            //   authorization: 'bearer ${ JSON.parse(localStorage.getItem(token))}'
            //}
        });
        result = await result.json();
        if (result) {
            getproducts();
        }
    };

    const searchhandle = async (event) => {

        let key = event.target.value;
        if (key) {
            let result = await fetch('localhost:500/search/${key}')
            // {
            //  headers: {
            //    authorization: 'bearer $(JSON.parse(localStorage.getItem('token')))'
            //}
            //}
            result = await result.json();

            if (result) {
                setproducts(result);
            }
        }
        else {
            getproducts();
        }

    }
    return (
        <div className="product-list">
            <h1>Product List</h1>
            <input type="text" className='search-product-box' placeholder="search product" onChange={searchhandle}></input>
            <ul>
                <li>s.no</li>
                <li>name</li>
                <li>price</li>
                <li>category</li>
                <li>operation</li>

            </ul>
            {
                products.length > 0 ? products.map((item, index) =>
                    <ul key={item._id}>
                        <li>{index + 1}</li>
                        <li>{item.name}</li>
                        <li>{item.price}</li>
                        <li>{item.category}</li>
                        <li><button onClick={() => deleteproduct(item._id)}>Delete</button></li>
                        <link to={"/update/10" + item._id}>Update </link>                   </ul>)
                    : <h1>No Result Found!</h1>
            }
        </div>
    )
}
export default productList;