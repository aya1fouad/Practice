var div= document.getElementById("mydiv");
var myList= document.getElementById("myList");
/////////////////////////////////////////
var xhr = new XMLHttpRequest();
xhr.open("GET","https://jsonplaceholder.typicode.com/users");
xhr.send();
xhr.addEventListener("readystatechange", function(){
    if (xhr.readyState == 4) {
       var userArr = JSON.parse(xhr.response);
        userArr.forEach(function(i){
           var tab= document.createElement('div');
           tab.classList='myTab';
           tab.appendChild(document.createTextNode(i.name));
           tab.id=i.id
            tab.setAttribute("onclick","Replace('"+i.name+"','"+i.id+"')");
           div.appendChild(tab);
        })
    }
})
////////////////////////////////////////////////////////////
function Replace(value,x){
    while (myList.hasChildNodes()){  
        myList.removeChild(myList.firstChild);
      }

    document.getElementById(x).setAttribute("style","background-color: white;")
    var xhr1= new XMLHttpRequest();
    xhr1.open("GET","https://jsonplaceholder.typicode.com/posts?userId="+x);
    xhr1.send();
    xhr1.addEventListener("readystatechange", function () {
        if (xhr1.readyState == 4) {
           var userArr1 = JSON.parse(xhr1.response);
            userArr1.forEach(function (i) {
               if(i.userId==x)
               {
                  var li=document.createElement('li');
                  li.appendChild(document.createTextNode(i.title));
                  myList.appendChild(li); 
               }
            })
        }
    })
}


