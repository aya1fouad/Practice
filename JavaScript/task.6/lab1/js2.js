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
//////////////////////////////////////////////////////////////////
function addClicks() {
    var currentValue = localStorage.getItem('myClicks') ? parseInt(localStorage.getItem('myClicks')) : 0;
    var newValue = currentValue + 1;
    localStorage.setItem('myClicks', newValue);
    return newValue;
}
////////////////////////////////////////////////////////
//var img = document.getElementById("image");
document.getElementById("name").innerText = getCookie("name");
document.getElementById("name").style.color = getCookie("colors");

//console.log(getCookie("name"));
if (getCookie("gender") === "female"){
    document.getElementById("image").src = "2.jpg";
}
else{
    document.getElementById("image").src = "1.jpg";
}
document.getElementById("counter").innerText= addClicks();




