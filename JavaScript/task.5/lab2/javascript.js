var x,y;

function timeover()
    {
      setTimeout(function(){
         x=document.forms["myForm"]["fname"].value;
         y=document.forms["myForm"]["age"].value;
           
        if(x==""&&y=="")
           {
               alert("Time Out !!");
           }
          },5000);
          }


function validateForm(event) {
    x = document.forms["myForm"]["fname"].value;
    if (x == "" || !isNaN(x)) {
        var para = document.getElementById("para");
        para.textContent = "enter valid name !!";
        document.forms["myForm"]["fname"].focus();
        return false;
    }

    y = document.forms["myForm"]["age"].value;
    if (y == "" || isNaN(y)) {
        var para1 = document.getElementById("para1");
        para1.textContent = "enter valid age !!";
        document.forms["myForm"]["age"].focus();
        return false;
    }

    var d = confirm("Confirm submission");
    if (d == false) {
        event.preventDefault();
    }
}



