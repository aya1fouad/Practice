function setCookie(cookieName,cookieValue) {
  document.cookie = cookieName + "=" + cookieValue+";expires=Thu, 01 Jan 2970 00:00:01 GMT";
}
/////////////////////////////////////////////////////////////////
function getCookie(cname) {
  var name = cname + "=";
  var ca = document.cookie.split(';');
  for (var i = 0; i < ca.length; i++) {
      var c = ca[i];
      while (c.charAt(0) == ' ') {
          c = c.substring(1);
      }
      if (c.indexOf(name) == 0) {
          return c.substring(name.length, c.length);
      }
  }
  return "";
}
  ///////////////////////////////////////////////////////////
function Book(Name,Price){
    this.Name=Name;
    this.Price=Price;
    this.author=function(AuthorName,Mail){
        this.AuthorName=AuthorName;
        this.Mail=Mail;
    }
}
/////////////////////////////////////////////////
var myForm= document.getElementById('Form');
var title= document.getElementById('title');
var price= document.getElementById('price');
var auth= document.getElementById('auth');
var mail= document.getElementById('mail');
var num= document.getElementById('num');
var table= document.getElementById('table');
var rows= document.getElementById('rows');

var letters = /^[A-Za-z]+$/;
var emailreg= /^[a-zA-Z0-9]{1,9}@[a-zA-Z0-9]{3,5}.[a-zA-z0-9]{2,4}$/;
var x=4;
var i=0;
var test=getCookie("Books Num");
var obj=[]
/////////////////////////////////////////////////////
myForm.onsubmit= function(e){
    e.preventDefault();
     x=4;

    if(title.value==""){
    document.getElementById('sp1').innerText="Required";
    x--;
  }

  if(price.value==""||isNaN(price.value)){
    document.getElementById('sp2').innerText="Required & Numbers Only";
    x--;
  }

  if(writer.value==""||!letters.test(writer.value)){
    document.getElementById('sp3').innerText="Required & Characters Only";
    x--;
  
  if(!emailreg.test(mail.value)){
    document.getElementById('sp4').innerText="Not valid";
    x--;
  }
  /////////////////////////////////
  if(x==4){
      obj[i]= new Book(title.value,price.value);
      obj[i].author(auth.value,mail.value);
      i++
    test--;

      if(test!=0){
          title.value="";
          price.value="";
          writer.value="";
          mail.value="";
      }
      else {
          myForm.remove();
          table.style.display= "inline";
          document.getElementById('tablestyle').style.display="block";
          for (var j=0; j<obj.length; j++){
          var tr= document.createElement('tr');

          var td=document.createElement('td');
          var td2=document.createElement('td');
          var td3=document.createElement('td');
          var td4=document.createElement('td');
          var td5= document.createElement('td');

          var btn1= document.createElement('button');
          var btn2= document.createElement('button');
          var btn3= document.createElement('button');
          var btn4= document.createElement('button');

          var inp1= document.createElement('input');
          var inp2= document.createElement('input');
          var inp3= document.createElement('input');
          var inp4= document.createElement('input');

          var span1= document.createElement('span');
          var span2= document.createElement('span');
          var span3= document.createElement('span');
          var span4= document.createElement('span');

          inp1.style.display= "none";
          inp2.style.display= "none";
          inp3.style.display= "none";
          inp4.style.display= "none";

          span1.innerHTML= obj[j].Name;
          span2.innerHTML= obj[j].Price;
          span3.innerHTML= obj[j].AuthorName;
          span4.innerHTML= obj[j].Mail;
          butt.innerHTML= "Edit";

          btn1.setAttribute("onclick","editing('"+j+"')");
          btn2.innerHTML= "Delet";
          btn2.setAttribute("onclick","Delet('"+j+"')");
          btn3.innerHTML= "Save";
          btn3.setAttribute("onclick","Save('"+j+"')");
          btn3.style.display="none";
          btn4.innerHTML= "Cancle";
          btn4.setAttribute("onclick","Cancle('"+j+"')");
          btn4.style.display="none";

          td.appendChild(inp1);
          td2.appendChild(inp2);
          td3.appendChild(inp3);
          td4.appendChild(inp4);

          td.appendChild(span1);
          td2.appendChild(span2);
          td3.appendChild(span3);
          td4.appendChild(span4);

          tr.append(td);
          tr.append(td2);
          tr.append(td3);
          tr.append(td4);

          td5.appendChild(btn1);
          td5.appendChild(btn2);
          td5.appendChild(btn3);
          td5.appendChild(btn4);

          tr.appendChild(td5);
          tr.id=j;
          document.getElementById("rows").appendChild(tr);
          }
          
    }
  }
}
/////////////////////////////////////////////////////////
 function editing(value)
 {
   var row =document.getElementById(value);
   var data= row.childNodes;

   var x1= data[0].textContent;
   var x2= data[1].textContent;
   var x2= data[2].textContent;
   var x2= data[3].textContent;

   console.log(row.childNodes);
   data[0].childNodes[0].style.display="inline";
   data[0].childNodes[1].style.display="none";
   data[1].childNodes[0].style.display="inline";
   data[1].childNodes[1].style.display="none";
   data[2].childNodes[0].style.display="inline";
   data[2].childNodes[1].style.display="none";
   data[3].childNodes[0].style.display="inline";
   data[3].childNodes[1].style.display="none";

   data[0].childNodes[0].value=data[0].textContent;
   data[1].childNodes[0].value=data[1].textContent;
   data[2].childNodes[0].value=data[2].textContent;
   data[3].childNodes[0].value=data[3].textContent;
   data[4].childNodes[0].style.display="none";
   data[4].childNodes[1].style.display="none";
   data[4].childNodes[2].style.display="inline";
   data[4].childNodes[3].style.display="inline";

  
  
 }
//////////////////////////////////////////////////
function Delet(value)
{
  document.getElementById(value).remove();
}
////////////////////////////////////
function Save(value)
 {
   var row =document.getElementById(value);
  var data= row.childNodes;
   data[0].childNodes[0].style.display="none";
   data[0].childNodes[1].style.display="inline";
   data[1].childNodes[0].style.display="none";
   data[1].childNodes[1].style.display="inline";
   data[2].childNodes[0].style.display="none";
   data[2].childNodes[1].style.display="inline";
   data[3].childNodes[0].style.display="none";
   data[3].childNodes[1].style.display="inline";
   data[4].childNodes[0].style.display="inline";
   data[4].childNodes[1].style.display="inline";
   data[4].childNodes[2].style.display="none";
   data[4].childNodes[3].style.display="none";

   data[0].childNodes[1].textContent=data[0].childNodes[0].value;
   data[1].childNodes[1].textContent=data[1].childNodes[0].value;
   data[2].childNodes[1].textContent=data[2].childNodes[0].value;
   data[3].childNodes[1].textContent=data[3].childNodes[0].value;
 }
////////////////////////////////////////
 function Cancle(value)
 {
   var row =document.getElementById(value);
   var data= row.childNodes;
   data[0].childNodes[0].style.display="none";
   data[0].childNodes[1].style.display="inline";
   data[1].childNodes[0].style.display="none";
   data[1].childNodes[1].style.display="inline";
   data[2].childNodes[0].style.display="none";
   data[2].childNodes[1].style.display="inline";
   data[3].childNodes[0].style.display="none";
   data[3].childNodes[1].style.display="inline";

   data[4].childNodes[0].style.display="inline";
   data[4].childNodes[1].style.display="inline";
   data[4].childNodes[2].style.display="none";
   data[4].childNodes[3].style.display="none";
 }
/////////////////////////////////////////////////