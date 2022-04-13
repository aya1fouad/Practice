$("#parent").hover(
    function(){
    $("#parent").animate({width : 300});
    $("#child").css("display", "block");
},
    function(){
        $("#child").css("display", "none");
        $("#parent").animate({width : 30});
    }
);
//////////////////////////////
$("#child").accordion();
