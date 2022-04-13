var myform = document.forms["myform"];
var namee = document.forms["myform"]["name"];
var age = document.forms["myform"]["age"];
var email = document.forms["myform"]["email"];

var spannamee = document.getElementById("spanname");
var spanage = document.getElementById("spanage");
var spanemail = document.getElementById("spanemail");
var subm=document.getElementById("submit");
var data = document.getElementById("data");


 subm.addEventListener("click",function () {
    
    if (namee.value == ""){
         spannamee.style.display = "inline";
         spannamee.textContent = "name is required";
         namee.value = "";
    }
    else if (!isNaN(namee.value)) {
        spannamee.style.display = "inline";
        spannamee.textContent = "name should be a string not a number";
        namee.value = "";
    }
    else {
        spannamee.textContent = "";
        
        if (age.value == "") {
            spanage.style.display = "inline";
            spanage.textContent = "age is required";
            age.value = "";
        }
        else if (isNaN(age.value)) {
            spanage.style.display = "inline";
            spanage.textContent = "age should be a number not a string";
            age.value = "";
        }
        else {
            spanage.textContent = "";
            
            if (email.value == "") {
                spanemail.style.display = "inline";
                spanemail.textContent = "email is required";
                email.value = "";
            }
            else if (!email.value.match(/^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/)) {
                spanemail.style.display = "inline";
                spanemail.textContent = "invalid email";
                email.value = "";
            }
            else {
                console.log(email.value);
                spanemail.textContent = "";
                var newrow = document.createElement("tr");
                data.appendChild(newrow);

                var newname = document.createElement("td");
                newrow.appendChild(newname);
                newname.textContent = namee.value;

                var newage = document.createElement("td");
                newage.textContent = age.value;
                newrow.appendChild(newage);

                var newemail = document.createElement("td");
                newemail.textContent = email.value;
                newrow.appendChild(newemail);
            }
        }
    }
});
