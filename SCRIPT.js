document.addEventListener("DOMContentLoaded",function(){
    const signupform = document.getElementById("signup form");
    const loginform = document.getElementById("login-form");
    const loginlink = document.getElementById("login-link");
    const signuplink = document.getElementById("signup-link");

    loginlink.addEventListener("click",function(event){
        event.preventDefault();
        signupform.style.display="none";
        loginform.style.display="block";
    });
    signuplink.addEventListener("click",function(event){
        event.preventDefault();
        loginform.style.display="none";
        signupform.style.display="block";
    });
});

document.addEventListener("DOMContentLoaded",function(){
    const hollywoodcontainer = document.getElementById("hollywood");
    const bollywoodcontainer = document.getElementById("bollywood");

    const hollywoodmovies = [
        {title:"srk",image:"hollywood2.jpg"},
         {title:"hk",image:"hollywood1.jpg"},
    ];
    const bollywoodmovies = [
        {title:"movieA",image:"bollywood1.jpg"},
        {title:"movieB",image:"bollywood2.jpg"},
    ];
})