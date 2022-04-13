 var inp;
 function CheckNumber(event)
 {
      inp=document.forms["myForm"]["input"].value;
      if(isNaN(inp))
      {
          event.preventDefault();
          var para=document.getElementById("para");
          para.textContent="you should enter number ";
          document.forms["myForm"]["input"].focus();
          return false;
      }
 }
