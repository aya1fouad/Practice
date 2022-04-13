var ev=document.getElementsByTagName("div")[0];

function changecolor(){
var co= ev.cloneNode(true);
var r=Math.floor(Math.random()*256);
var g=Math.floor(Math.random()*256);
var b=Math.floor(Math.random()*256);
co.style.backgroundColor="rgb("+ r +","+ g +","+ b +")";
document.body.appendChild(co);
}
ev.onclick = changecolor;