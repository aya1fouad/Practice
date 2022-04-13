function calculateCircumference(radius) {
    return 2 * Math.PI * radius;
  }


  var n;
do{

    n= window.prompt("what is the value of your circular radius?");

}while(  n===null || n==="" ||n.match(/[^0-9]/) );

var rad= calculateCircumference(n);
window.alert("total area of the circular is: "+ rad);



var seq;
do{

    seq= window.prompt("what is the value you want to calculate its square root?");

}while(  seq===null || seq==="" ||seq.match(/[^0-9]/) );
 var squa= Math.sqrt(seq);
 window.alert("square root of : "+seq+" is :"+ squa);