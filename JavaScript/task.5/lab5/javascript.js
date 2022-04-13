
var x = 0, y = 0, w=200, h=200;  
var dx = 5, dy = 5;             
var interval = 100;              
var win = window.open('javascript:"<h1>BOUNCE!</h1>"', "", 
          "width=" + w + ",height=" + h);
win.moveTo(x,y);
var intervalID  = window.setInterval("bounce()", interval);

function bounce() {
    if (win.closed) {
        clearInterval(intervalID);
        return;
    }
    if ((x+dx > (screen.availWidth - w)) || (x+dx < 0)) dx = -dx;
    if ((y+dy > (screen.availHeight - h)) || (y+dy < 0)) dy = -dy;

    x += dx;
    y += dy;
    
    win.moveTo(x,y);
}


