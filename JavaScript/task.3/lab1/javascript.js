var arr=[3];
var sum=0;
var sub=0;
var mul=1;
var div=1;
for (var i=0 ;i<3 ; i++){
    do{
       arr[i]= window.prompt("enter 3 element");
        if(isNaN(arr[i])==true){
            alert("please enter numbers only")
        }
    }while(arr[i]===null || arr[i]==="" ||isNaN(arr[i])==true);
    arr[i]=parseInt(arr[i]);
}

for(var i=0;i<3;i++ ){
   sum +=arr[i] ;
   mul*=arr[i];
   div =arr[i]/div;
}
sub=arr[0]-arr[1]-arr[2];

window.document.write("<h4>"+"the sum of numbers is ="+sum+"</h4>");
window.document.write("<h4>"+"the sub of numbers is ="+sub+"</h4>");
window.document.write("<h4>"+"the mul of numbers is ="+mul+"</h4>");
window.document.write("<h4>"+"the div of numbers is ="+div+"</h4>");