var task=$('ul');
var add=$('button');
////////////////////////
 add.on('click',function(){
     var neww = $.trim($("input[type=text]").val());
     task.append("<li>"+neww+"<span> delete </span></li>" ); 
      $("input[type=text]").val("");

  })
//////////////////////////////////////////////
   task.on('click','span',function(index){
     $(this).parent().remove();
     //$("#"+index).remove();
   })
/////////////////////////////
//   function delete(index){
//     $(this).remove();
// }