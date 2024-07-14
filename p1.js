
import React from 'react';
import ReactDom from 'react-router-dom';

function Car(props) {
    return <li>I am a{props.brand}</li>
}

function Garage() {
    const cars = ['Ford', 'BMW', 'Audi'];
    return (
        <>
            <h1>Who lives in my garage?</h1>

            <ul>
                {
                    cars.map((car) => <car brand={car} />)
                }
            </ul>
        </>
    );
}

const root = ReactDom.createRoot(document.getElementById('root'));
root.render(<garage />);
