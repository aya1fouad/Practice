$("#playy").click(function(){
    $("#mydiv").animate({
    "left":"300px",
    "width":"500px"
},2000);
})

$("#stopp").click(function(){
    $("#mydiv").stop();
})