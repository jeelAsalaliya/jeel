import React from "react";
import Header from "./components/header/header/header";
import Footer from "./components/header/footer/footer";
import { Outlet } from "react-router-dom";

function layout() {
    return (
        <>
            <Header />
            <Outlet />
            <Footer />
        </>
    )
}

export default layout