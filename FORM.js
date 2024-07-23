const submitBtn = document.getElementById('submitBtn');
const nameError = document.getElementById('nameError');
const emailError = document.getElementById('emailError');
const passError = document.getElementById('passError');


submitBtn.addEventListener('click',(e)=>
{
 e.preventDefault();

 if(validateName() && validateEmail() && validatePassword())
 {
    alert("form submitted successfully");
 }
});

function validateName()
{
    let name = document.getElementById('name').value;

    if(name.length == 0)
    {
        nameError.innerHTML = "name is required";
        nameError.previousElementSibling.classList.add('fa-xmark');
        return false;
    }

    if(!name.match)
    {
        nameError.innerHTML = "write a full name";
        nameError.previousElementSibling.classList.add('fa-xmark');
        return false;
    }

    nameError.innerHTML = "";
    nameError.previousElementSibling.classList.add('fa-check');
     return true;

}

function validateEmail()
{
    let email = document.getElementById('email').value;

    if(email.length == 0)
    {
        emailError.innerHTML = "email is required";
        email.previousElementSibling.classList.add('fa-xmark');
        return false;
    }

    if(!email.match)
    {
        emailError.innerHTML = "enter valid email";
        emailError.previousElementSibling.classList.add('fa-xmark');
        return false;
    }

    emailError.innerHTML = "";
    emailError.previousElementSibling.classList.add('fa-check');
     return true;

}

function validatePassword()
{
    let password = document.getElementById('password').value;

    if(password.length == 0)
    {
        passError.innerHTML = "password is required";
        passError.previousElementSibling.classList.add('fa-xmark');
        return false;
    }

    if(password.match)
    {
        passError.innerHTML = "password should contain 1 Uppercase,1 Lowercase,1 Digit & 1 Alphabet";
        passError.previousElementSibling.classList.add('fa-xmark');
        return false;
    }

    passError.innerHTML = "";
    passError.previousElementSibling.classList.add('fa-check');
     return true;

}