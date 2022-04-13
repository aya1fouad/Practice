$(".container img").click(function(event) {
    popImg = $(this).attr('src');

    $("body").append('<div class="pop_img"><div class="popImg"><div class="control"><a class="prev">&#10094;</a></div><img id="slider" src="' + popImg + '"><div class="control"><a class="next">&#10095;</a></div></div></div>');

    $(".pop_img").click(function(event) {
        $(".pop_img").remove();
    });
    $(".popImg").click(function(event) {
        return false;
    });
    $(document).ready(function() {
        $('.next').on('click', function() {
            var currentImg = $('.active');
            var image = $('.active img');
            var nextImg = currentImg.next();
            console.log(nextImg);
            if (nextImg.length) {
                console.log(nextImg.attr('src'));
                currentImg.removeClass('active');
                nextImg.addClass('active');
                $("#slider").attr('src', $('.active img').attr('src'));
            }
        });

        $('.prev').on('click', function() {
            var currentImg = $('.active');
            var prevImg = currentImg.prev();

            if (prevImg.length) {
                currentImg.removeClass('active');
                prevImg.addClass('active');
                $("#slider").attr('src', $('.active img').attr('src'));
            }
        });
    });
    return false;
});

//////////////////////////////////////////////////////
// $(".container a").click(function(event) {
//     popImg = $(this).attr('href');
    
//     $("body").append('<div class="pop_img"><div class="popImg"><div class="control"><a class="prev">&#10094;</a></div><img id="currImg" src="' + popImg + '"><div class="control"><a class="next">&#10095;</a></div></div></div>');

//     $(".pop_img").click(function(event) {
//         $(".pop_img").remove();
//     });
//     ////////////////////////
//     $(".popImg").click(function(event) {
//         return false;
//     });
//     ////////////////////////////////
//     $(document).ready(function() {
//         $(".next").click(function() {       
//             var nextImg = $(".container").find('.column.active').next();  
//             nextImg.addClass('active');
//             $("#currImg").attr('src',nextImg.find("a").attr('href'))
//             $(".container").find('.column.active').prev().removeClass('active');

//         });
//      ////////////////////////////
//         $(".prev").click(function() {
//             var prevImg = $(".container").find('.column.active').prev();  
//             prevImg.addClass('active');
//             $("#currImg").attr('src',prevImg.find("a").attr('href'))
//             $(".container").find('.column.active').next().removeClass('active');

//         });
//     });


//     return false;
// });