var namee, mobile, eMail,adress,gender,jopTitle,password="",url;
var myForm = document.getElementById("myForm");
var valid = /^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/;
var regMobile=/^(010|011|012|015)[0-9]{8}$/;
var para = document.getElementById("para");
var para1 = document.getElementById("para1");
var para2 = document.getElementById("para2");
var para3 = document.getElementById("para3");
var para4 = document.getElementById("para4");
var para5 = document.getElementById("para5");
var para6 = document.getElementById("para6");
var row, td1, td2, td3,td4,td5,td6,td7;
var myTable = document.getElementById("myTable");

if(myForm)
{
    myForm.addEventListener("submit", function (event) {
        namee = document.forms["myForm"]["fname"].value;
    
        if (namee == "") {
            para.textContent = "required !!";
            event.preventDefault();
            document.forms["myForm"]["fname"].focus();
            return false;
        }
        else if (!isNaN(namee)) {
            para.textContent = "*enter valid name !!";
            event.preventDefault();
            document.forms["myForm"]["fname"].focus();
            return false;
        }
        else {
            para.textContent = "";
        }
    
        eMail = document.forms["myForm"]["email"].value;
        if (eMail == "") {
            para1.textContent = "* required !!";
            event.preventDefault();
            document.forms["myForm"]["email"].focus();
            return false;
        }
        else if (!eMail.match(valid)) {
            para1.textContent = "*enter valid email!!";
            event.preventDefault();
            document.forms["myForm"]["email"].focus();
            return false;
        }
        else {
            para1.textContent = "";
                }

    password = document.forms["myForm"]["Password"].value;
        if (password.length<5) {
            para2.textContent = "required & more than 5 characters!!";
            event.preventDefault();
            document.forms["myForm"]["Password"].focus();
            return false;
        }
        else {
            para2.textContent = "";
                }
    
    jopTitle= document.forms["myForm"]["Jop"].value;
        if (jopTitle=="") {
            para3.textContent = "required ";
            event.preventDefault();
            document.forms["myForm"]["Jop"].focus();
            return false;
        }
        else if (!isNaN(jopTitle)) {
            para3.textContent = "enter valid jop title!!";
            event.preventDefault();
            document.forms["myForm"]["Jop"].focus();
            return false;
        }
        else {
            para3.textContent = "";
                }
    
        mobile = document.forms["myForm"]["Mobile"].value;
        if (mobile == "") {
    
            para4.textContent = "required !!";
            event.preventDefault();
            document.forms["myForm"]["Mobile"].focus();
            return false;
        }
        else if (!mobile.match(regMobile)) {
            para4.textContent = "enter valid mobile number !!";
            event.preventDefault();
            document.forms["myForm"]["Mobile"].focus();
            return false;
        }
        else {
            para4.textContent = "";
        }
    gender = document.forms["myForm"]["Gender"].value;
    var checkM=document.getElementById("M").checked;
    var checkF=document.getElementById("F").checked;
    if (!checkM && !checkF ) {
        para5.textContent = "required !!";
        event.preventDefault();
        return false;
    }
    else {
        para5.textContent = "";
    }

    adress= document.forms["myForm"]["Address"].value;
        if (adress=="") {
            para6.textContent = "required ";
            event.preventDefault();
            document.forms["myForm"]["Address"].focus();
            return false;
        }
        else {
            para6.textContent = "";
                        }
    });
}

function info()
{
    console.log("in");
    url=location.search;
        var parameters=url.substring(1).split("&");
        var temp=parameters[0].split("=");
        var formName=unescape(temp[1]);
        temp=parameters[1].split("=");
        var formmail=temp[1];
        var formEmail=formmail.replace("%40","@");
        temp=parameters[2].split("=");
        var formPassword=unescape(temp[1]);
        temp=parameters[3].split("=");
        var formJop=unescape(temp[1]);
        temp=parameters[4].split("=");
        var formMobile=unescape(temp[1]);
        temp=parameters[5].split("=");
        var formGender=unescape(temp[1]);
        temp=parameters[6].split("=");
        var formAddress=unescape(temp[1]);
        var myH=document.getElementById("myH");
        myH.style.display="inline";
        myH.textContent="Welcome"+" "+formJop+" "+formName;
        myTable.style.display = "block";
        row = document.createElement("tr");
        td1 = document.createElement("td");
        td2 = document.createElement("td");
        td3 = document.createElement("td");
        td4 = document.createElement("td");
        td5 = document.createElement("td");
        td6 = document.createElement("td");
        td7 = document.createElement("td");
        td1.textContent = formName;
        td2.textContent = formEmail;
        td3.textContent = formPassword;
        td4.textContent = formJop;
        td5.textContent = formMobile;
        td6.textContent = formGender;
        td7.textContent = formAddress;
        row.appendChild(td1);
        row.appendChild(td2);
        row.appendChild(td3);
        row.appendChild(td4);
        row.appendChild(td5);
        row.appendChild(td6);
        row.appendChild(td7);
        myTable.appendChild(row);
        
}