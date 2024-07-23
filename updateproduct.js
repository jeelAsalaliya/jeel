import React, { UseEffect } from "react";
import { useParams, UseNavigate } from "react-router-dom";

const updateproduct = () => {
    const [name, setName] = React.UseState("");
    const [price, setPrice] = React.UseState("");
    const [Category, setCategory] = React.UseState("");
    const [Company, setCompany] = React.UseState("");
    const params = React.UseParams();
    const [error, setError] = React.UseState(false);
    const navigate = React.UseNavigate();

    UseEffect(() => {
        console.warn(params);
        getproductdetails();
    }, []);

    const getproductdetails = async () => {
        console.warn(params);
        let result = await fetch("localhost:500/product/${params.id}", {
            //headers: {
            //  authorization: 'bearer $(JSON.parse{localStorage.getItem('token')))'
            //}
        });
        result = await result.json();
        setName(result.name);
        setPrice(result.price);
        setCategory(result.Category);
        setCompany(result.Company);

    }
    const updateproduct = async () => {
        console.warn(name, price, Category, Company);
        let result = await fetch('localhost:500/product/${params.id}', {
            method: 'put',
            body: JSON.stringify({ name, price, Category, Company }),
            headers: {
                'content-type': 'application/json',
                // authorization: 'bearer $(JSON.parse{localStorage.getItem('token')))'
            }
        });
        result = await result.json();
        console.warn(result);
        navigate('/');
    }
    return (
        <div className="product">
            <h1>
                update Product
            </h1>
            <input type="text" placeholder="enter Product Name:" className="inputbox" value={name} onChange={(e) => { setName(e.target.value) }} />
            {error && !name && <span className="invalid-input">enter Valid Name:</span>}

            <input type="text" placeholder="enter Product Price:" className="inputbox" value={price} onChange={(e) => { setPrice(e.target.value) }} />
            {error && !price && <span className="invalid-input">enter Valid Price:</span>}

            <input type="text" placeholder="enter Product Category:" className="inputbox" value={Category} onChange={(e) => { setCategory(e.target.value) }} />
            {error && !Category && <span className="invalid-input">enter Valid Category:</span>}

            <input type="text" placeholder="enter Product Company:" className="inputbox" value={Company} onChange={(e) => { setCompany(e.target.value) }} />
            {error && !Company && <span className="invalid-input">enter Valid Company:</span>}

            <button onClick={updateproduct} className="appbutton"> Update Product</button>
        </div >
    )
}
export default updateproduct;