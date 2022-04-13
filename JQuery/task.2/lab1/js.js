$.get("https://jsonplaceholder.typicode.com/users",function(users,status,s){
        if(s.status===200){
           // console.log(users,status);
            users.forEach(function (i) {
                $("#uls").append(`<li> <a href="#${i.id}">${i.name}</a></li>`);
            })
        }  
        PostsTitle(1) ;
        $("#tabs").tabs({
            activate: function( e ) {
                var id = e.currentTarget.hash.split("");
                idd =id[1];
               // console.log(idd);
                PostsTitle(idd);
            }
          });
})
///////////////////////////////////////////////////////////
function PostsTitle(id){
    $.get("https://jsonplaceholder.typicode.com/posts?userId="+id,function(posts,status,s){
        if(s.status===200){
            //console.log(posts,status);
            var div = $(`<div id="${id}"></div>`);
            posts.forEach(function (i) {
                div.append(`<p>${i.title} </p>`);
            })
            $("#tabs").append(div);
        }   
})
}