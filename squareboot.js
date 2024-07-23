var mathoperations=(function(){
    function squareroot(num){
        return math.sqrt(num);
    }

    function cuberoot(num){
        return math.cbrt(num);
    }
    function square(num){
        return num*num;
    }
    
    return{
        squareroot:squareroot,
        cuberoot:cuberoot,
        square:square
    };
})();

module.exports = mathoperations;