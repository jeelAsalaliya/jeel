import { Link, useNavigate } from "react-router-dom";
import React, { } from "react";


const Nav = () => {
    const auth = localStorage.getItem('users');
    const navigate = useNavigate();
    const logout = () => {
        localStorage.clear();
        navigate("/signup");
    }
    return (
        <div>
            <img alt="logo" className="logo" src="C:\Users\aslal\Downloads\rohit sharma1.jpeg"></img>
            <ul className="nav-ul">
                <li><Link to="/">Product</Link></li>
                <li><Link to="/Add"> Add Product</Link></li>
                <li><Link to="/Update">Update Product</Link></li>
                {/*</ul><li><Link to="/logout">logout</Link></li>*/}
                <li><Link to="/Profile">Profile</Link></li>
                {/* <li>{auth ? <Link onClick={logout} to="/signup">logout</Link> :
                <Link to="/signup">signup</Link>}</li>*/}

                {
                    auth ? <li><Link onClick={logout} to="/signup">logout({JSON.parse(auth).name})</Link></li>
                        : <>
                            <li> <Link to="/signup">signup</Link></li>
                            <li><Link to="/logout">logout</Link></li>
                            <li><Link to="/login">login</Link></li>
                        </>
                }
            </ul>
            :
            {/*<ul className="nav-right">
                <li> <Link to="/signup">signup</Link></li>
                <li><Link to="/logout">logout</Link></li>
                <li><Link to="/login">login</Link></li>
            </ul>*/}
        </div >
    )
}

export default Nav;