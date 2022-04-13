function setCookie(cookieName,cookieValue) {
  document.cookie = cookieName + "=" + cookieValue+";expires=Thu, 01 Jan 2970 00:00:01 GMT";
}
//////////////////////////////////////
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
///////////////////////////////////////////////////////////////
function Book(nam,pri){
    this.Name=nam;
    this.price=pri;
    this.author=function(AuthorName,Mail){
        this.AuthorName=AuthorName;
        this.Mail=Mail;
    }
}
//////////////////////////////////////////////////////////
var input= document.getElementById('num');
var myForm= document.getElementById('Form');
myForm.onsubmit= function(e){
    e.preventDefault();
    if(input.value==""){
    document.getElementById('sp').innerText="Required";
  }
  else {
    setCookie("Books Num",num.value)
    window.location.replace("form.html");
  }
}