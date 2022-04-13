var image = document.getElementsByClassName("marbels");
var current = 0;
var last = 4;
var start = setInterval(function(){},0);

function marbel(){
    start = setInterval(function(){
        image[current].setAttribute("src","marble2.jpg");
        image[last].setAttribute("src","marble1.jpg");
        current = (current+1)%5 ;
        last = (last+1)%5;
        console.log(current);
        console.log(last); 
    },500);
}
marbel();
for(var i = 0 ; i < image.length ;i++){
    image[i].addEventListener("mouseover",function(event){ clearInterval(start);});
    image[i].addEventListener("mouseout",function(event){ marbel();});
}
