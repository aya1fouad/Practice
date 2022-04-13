var msg = new String();
msg =window.prompt("enter msg :");
var count=0;
var i;
for(i=0;i<msg.length; i++){
    if(msg[i]=="e" || msg[i]=="E"){

        count++;
    }
}

window.document.write(count);


///////////////////////////////////////////////////////////////
//var char = window.prompt("enter character :");
//var msgonecase = msg.toLowerCase();
//var charonecase = char.toLowerCase();
//for (var i = 0; i < msgonecase.length; i++)
//{
   // if (msgonecase[i] ==charonecase )
   // {
   //     count++;
  //  }}


