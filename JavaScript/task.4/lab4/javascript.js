 var count=0;
 var picture=document.getElementById("myPic");

 picture.addEventListener("click",function(){
     if(count==0)
     {
         count=1;
        var ul=document.getElementById("nav");
        ul.style.listStyleType = "circle";
        ul.style.display="inline-block";
        var d=document.getElementById("header");
        d.style.left=500;
        var image =d.cloneNode(true);
        image.style.left=0;
        image.style.right=500 ;
       console.log(image);
   
       var dd=document.createElement("div");
       dd.appendChild(image);
       document.body.append(dd,image);

     }
    
     
 })
