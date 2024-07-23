var mathoperations = require('squareboot');

function displayresults(number) {
    console.log('square root of', number, ":", mathoperations.squareroot(number));
    console.log('cuberoot of', number, ":", mathoperations.cuberoot(number));
    console.log('square of', number, ":", mathoperations.square(number));
}

var number = 5;
displayresults(number);