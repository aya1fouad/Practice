function Sum (num1,num2){
   if(arguments.length!=2){
    throw 'accepts only 2 parameters';
   }
   else{
    console.log(num1+num2);
   }
}
Sum(10,5);