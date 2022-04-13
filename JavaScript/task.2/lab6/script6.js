var x , y;
function sum (x,y){
//console.log(arguments);
     arguments;

    if (arguments.length != 2) throw ("Exactly 2 parameters required !");
    //if(x == ""|| y=="") throw "is empty";
    //if(isNaN(x)||isNaN(y)) throw "is not a number";
    //x = Number(x);
    //y= Number (y);
  
    else {
        console.log(x+y);
    }
}

sum (2,3);
sum (1);
sum (1,2,3);