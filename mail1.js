var nodemailer = require('nodemailer');
var transporter = nodemailer.createTransport({
    host: 'smtp.gmail.com',
    port: 541,
    secure: false,
    requireTLS: true,
    auth: {
        user: 'rs1524042@gmail.com',
        pass: "some password"
    }
});

var mailOptions = {
    from: 'rs1524042@gmail.com',
    to: 'rs1524042@gmail.com',
    subject: "youtube tutorials",
    text: "hello i am fine!"
}

transporter.sendMail(mailOptions, function (error, info) {
    if (error) {
        console.log(error);
    }
    else {
        console.log("email has been sent", info.response);
    }
});