var msg;
do{

    msg=window.prompt("enter a message "); 

}while(msg===null || msg==="");

for(var i=1;i<7;i++){
   document.write("<h"+i+">" +msg+"</h"+i+">");
}