var tabs=$("#mydiv");
///////////////////////////////////
tabs.on("click","span", function(){
    $(".spn").removeClass("active");
    $(this).addClass("active");
    $("#mydiv2").text("Tab" + $(this).attr('id'));
});