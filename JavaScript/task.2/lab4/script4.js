var name ;
 do{
   name =window.prompt("enter your name:");
  }while(name===null || name==="" ||name.match(/[^a-zA-Z]/g));


  var phonenumber;
  do{
    phonenumber= window.prompt("enter your phone number:");
  }while(phonenumber===null || phonenumber==="" ||phonenumber.match(/[^0-9]/) || phonenumber.length!= 8);
 

var mobilenumber ;
var phonereg=/^(01)[012][0-9]{8}$/;
var phoneregresponse;
do{

    mobilenumber = window.prompt("enter your mobile number:");
    phoneregresponse = phonereg.test(mobilenumber);
}while(mobilenumber===null || mobilenumber==="" || phoneregresponse != true);
 

var email ;
var emailreg= /^[a-zA-Z0-9]{1,9}@[a-zA-Z0-9]{3,5}.[a-zA-z0-9]{2,4}$/;
var emailreeresponse;
do{
    email = window.prompt("enter your email:");
    emailreeresponse =emailreg.test(email);

}while(email===null || email==="" || emailreeresponse != true);

window.document.write("<h1>your data: </h1>");
window.document.write("<h1>your name is: "+ name +"</h1>");
window.document.write("<h1>your phonenumber is: "+phonenumber +"</h1>");
window.document.write("<h1>your mobilenumber is: "+mobilenumber +"</h1>");
window.document.write("<h1>your email is: "+email +"</h1>");
