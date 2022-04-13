
var image = document.getElementById("img");
var current = 1;
var started  = setInterval(function(){},0) ;

function next(){
    current  = (current%3)+1
    image.setAttribute('src',current+'.jpg');
}

function start(){
    console.log("start");
    started = setInterval(function(){ next();},500);
}

function stop(){
    clearInterval(started);
}

function pervious(){
    console.log("pervious");
    current  = current-1;
    if(current < 1 )
        current = 6;
        image.setAttribute('src',current+'.jpg');
}