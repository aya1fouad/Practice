var red = document.getElementsByTagName("input")[0];
var green = document.getElementsByTagName("input")[1];
var blue = document.getElementsByTagName("input")[2];
var div = document.getElementById("myDiv");
///////////////////////////////////////////
function changeColor(){
    div.style.color = "rgb(" + red.value + ","+ green.value + "," + blue.value + ")";
}