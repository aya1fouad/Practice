var namee=document.getElementById("name");
var gender= document.getElementsByName("gender");
 var color=document.getElementsByName("colors");
////////////////////////////////////////////////////////////
function setCookie(cname, cvalue ) {
  var date = new Date("2021/11/11");
  //  var d = new Date();
  //  d.setTime(d.getTime() + (exdays * 24 * 60 * 60 * 1000));
  //  var expires = "expires=" + d.toUTCString();
  document.cookie = cname + "=" + cvalue + ";" +"expires="+date;
//console.log("fgvb");
}
//////////////////////////////////////////////////////////////
function checkCookie() {
  var user = getCookie("username");
  if (user != "") {
    alert("Welcome again " + user);
  } else {
    user = prompt("Please enter your name:", "");
    if (user != "" && user != null) {
      setCookie("username", user, 365);
    }
  }
}
////////////////////////////////////////////////////////////////////
 function resgt() {
  setCookie("name", namee.value);
  // setCookie("age", age);
  // setCookie("color", color);
  if (document.getElementById("1").checked) {
    setCookie("gender", "male");
  } else if(document.getElementById("2").checked) {
    setCookie("gender", "female");
  }
  for(i=0;i<color.length;i++){
    if(color[i].value=="Red"){
      setCookie("colors","red");
    }else if(color[i].value=="Blue"){
      setCookie("colors","blue");
    }else if(color[i].value=="Green"){
      setCookie("colors","green");
    }else if(color[i].value=="White"){
      setCookie("colors","white");
    }
  }
  location.replace("page2.html");
}
///////////////////////////////////////////////////
function deleteCookie(cookieName) {
  document.cookie = cookieName + '=; Path=/; expires=Thu, 21 June 1997 00:00:01 GMT;';
}