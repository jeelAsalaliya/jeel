import React, { UseEffect } from "react";
import { useNavigate } from 'react-router-dom';

const login = () => {
    const [email, setEmail] = React.Usestate("");
    const [password, setPassword] = React.Usestate("");
    const navigate = navigate();

    UseEffect(() => {
        const auth = localStorage.getItem('user');
        if (auth) {
            navigate("/")
        }
    });

    const handlelogin = async () => {
        console.warn("email,password", email, password);

        let result = await fetch('localhost:500/login', {
            method: 'post',
            body: JSON.stringify({ email, password }),
            headers: {
                'content-type': 'application/json'
            },
        });
        result = await result.JSON();
        console.warn(result);
        if (result.auth) {
            localStorage.setItem("user", JSON.stringify(result.user));
            localStorage.setItem("token", JSON.stringify(result.auth));

            navigate("/")
        } else {
            alert("please enter details:");
        }
    };

    return (
        <div className="login">
            <input type="text" className="inputbox" placeholder="enter email:" onChange={(e) => setEmail(e.target.value)} value={email} />
            <input type="text" className="inputbox" placeholder="enter password:" onChange={(e) => setPassword(e.target.value)} value={password} />
            <button onClick={handlelogin} className="appbutton" type="button">login</button>
        </div>

    )
}

export default login;