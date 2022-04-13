let Band= $("#Band");
let artist=$("#artist");
let data;
//////////////////////////////////////////////////////
async function getBands(){
  try{
  let response =await fetch("rockbands.json",{method:'GET'})
  data=await response.json()

  for(var key in data){
    Band.append("<option value='"+key+"'>"+key+"</option>");
   }

  }

 catch(e){
  console.log(e);
}

}
/////////////////////////////////////////////
Band.on("change",function(){
var artists=data[Band.val()];
console.log(data[Band.val()]);
artist.html("<option >please select</option>");

for(var i=0;i<artists.length;i++){
  artist.append("<option value='"+artists[i].value+"' >"+artists[i].name+"</option>");
}

})
///////////////////////////////////////////
artist.on("change",function(){
   console.log(artist.val());
  window.open(artist.val());
})