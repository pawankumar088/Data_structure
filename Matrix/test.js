var nodemailer = require('nodemailer');

var transporter = nodemailer.createTransport({
    service: 'gmail',
    auth: {
        user: 'pawankumar08892@gmail.com',
        pass: '73229115'
    }
});

var mailOptions = {
    from: 'pawankumar08892@gmail.com',
    to: 'pk8142348@gmail.com',
    subject: 'how are you',
    text: 'this is easy'
};

transporter.sendMail(mailOptions, function (error, info) {
    if (error) {
        console.log(error);
    } else {
        console.log('Email sent: ' + info.response);
    }
});