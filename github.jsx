import React, { useState } from "react";
import { useLoaderData } from "react-router-dom";

function github() {
    const data = useLoaderData()
    const [data, setdata] = useState([]);
    useEffect(() => {
        fetch("https://api.github.com/users/hiteshchoudhary")
            .then(Response => Response.json)
            .then(data => {
                console.log(data);
                setdata(data);
            })
    }, [])
    return (
        <div className="text-center m-4 bg-gray-600 text-0white p-4 text-3xl">github followers:{data.followers}
            <img className="text-center" src={data.avatar_url} alt="git picture" width={300} />
        </div>
    )
}
export default github

export const githubInfoLoader = async () => {
    const Response = await fetch("https://api.github.com/users/hiteshchoudhary")
    return Response.json();
}