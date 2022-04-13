var arr=[5];
for (var i=0 ;i<5 ; i++){
    do{
       arr[i]= window.prompt("enter 3 element");
        if(isNaN(arr[i])==true){
            alert("please enter numbers only")
        }
    }while(arr[i]===null || arr[i]==="" ||isNaN(arr[i])==true);
    arr[i]=parseInt(arr[i]);
}


window.document.write("<h4>"+"the sort elementsare: "+arr.sort()+"</h4>");
window.document.write("<h4>"+"the unsort elementsare: "+ arr.reverse()+"</h4>");