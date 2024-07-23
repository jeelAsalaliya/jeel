
import React, { useState, useEffect } from "react";
import { useNavigate } from 'react-router-dom'

const SignUp = () => {
    const [name, setName] = useState("");
    const [email, setEmail] = useState("");
    const [password, setPassword] = useState("");
    const navigate = useNavigate();

    useEffect(() => {
        const auth = localStorage.getItem('users');
        if (auth) {
            navigate("/");
        }
    });

    const collectData = async () => {
        console.warn(name, email, password);
        let result = await fetch('localhost:500/register', {
            method: 'post',
            body: JSON.stringify({ name, email, password }),
            headers: {
                'content-type': 'application/json'
            },
        });
        result = await result.json();
        console.warn(result);
        localStorage.setItem("user", JSON.stringify(result.result));
        localStorage.setItem("token", JSON.stringify(result.auth));
        navigate("/")
    }
    return (
        <div className="register">
            <h1>Register</h1>
            <input className="inputbox" type="text"
                value={name} onChange={(e) => setName(e.target.value)} placeholder="enter Name:" />

            <input className="inputbox" type="text"
                value={email} onChange={(e) => setEmail(e.target.value)} placeholder="enter Email:" />

            <input className="inputbox" type="password"
                value={password} onChange={(e) => setPassword(e.target.value)} placeholder="enter Password:" />

            <button onClick={collectData} className="appbutton" type="button">SignUp</button>

        </div>
    )
}
export default SignUp;