//  var canvas = document.getElementById("canvas");
//  var ctx = canvas.getContext("2d");
 
//  var button = document.getElementById("refresh");
 
//  var refresh = function() {
 
//  ctx.clearRect(0,0,400,400);
//  for(i=0; i<600; i++) {
 
//  var x = Math.floor(Math.random()*300);
//  var y = Math.floor(Math.random()*300);
//  var radius = Math.floor(Math.random()*20);
 
//  var r = Math.floor(Math.random()*255);
//  var g = Math.floor(Math.random()*255);
//  var b = Math.floor(Math.random()*255);
   
//  ctx.beginPath();
//  ctx.arc(x,y,radius,Math.PI*2,0,false);
//  ctx.fillStyle = "rgba(" + r + "," + g + "," + b + ",1)";
//  ctx.fill();
//  ctx.closePath();
   
//  }
//  }
 
//  refresh();
//  button.addEventListener("click", refresh, false);
//////////////////////////////////////////
var colorr = document.getElementById("color");
function myfunc() {
    console.log(colorr.value);
    canvas = document.getElementById("canvasArea");
    context = canvas.getContext("2d");
    context.clearRect(0, 0, canvas.width, canvas.height);
    var numCircles = 500;
    for (var n = 0; n < numCircles; n++) {
        var xPos = Math.random() * canvas.width;
        var yPos = Math.random() * canvas.height;
        color = colorr.value;
        var raduis = 20;
        drawCircle(context, xPos, yPos, raduis, color);
    }
}
function drawCircle(context, xPos, yPos, radius, color) {
    var startAngle = (Math.PI / 180) * 0;
    var endAngle = (Math.PI / 180) * 360;
    context.shadowColor = "gray";
    context.shadowOffsetX = 1;
    context.shadowOffsetY = 1;
    context.shadowBlur = 5;
    context.beginPath();
    context.arc(xPos, yPos, radius, startAngle, endAngle, false);
    context.strokeStyle = "" + color;
    context.stroke();
}