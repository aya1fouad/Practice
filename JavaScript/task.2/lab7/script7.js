var i;
var sum =0;
function sumofnumbers (x,y){
//console.log(arguments);
     arguments;
for (i=0;i<arguments.length;i++){
    if (isNaN(arguments[i])){
        throw "is not a number";
    }
}
for (i=0;i<arguments.length;i++)  {
    sum +=arguments[i];
} 

return sum ;
}

console.log ("the sum of numbers is: "+ sumofnumbers (2,3,4,5,6));