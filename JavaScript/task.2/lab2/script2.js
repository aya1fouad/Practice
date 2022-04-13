var check= window.confirm("do you want case sensative yes or no?");

var word = window.prompt("enter word: ");

function checkPalindromeonecase( str) {
    // convert string to one case
   var arrayonecase= str.toLowerCase();

   // convert string to an array
   var arrayValues = arrayonecase.split('');

   // reverse the array values
   var reverseArrayValues = arrayValues.reverse();

   // convert array to string
   var reverseString = reverseArrayValues.join('');

   if(arrayonecase == reverseString) {
       window.document.write('It is a palindrome');
   }
   else {
       window.document.write('It is not a palindrome');
   }
}

function checkPalindrome( str) {

    // convert string to an array
    var arrayValues = str.split('');

    // reverse the array values
    var reverseArrayValues = arrayValues.reverse();

    // convert array to string
    var reverseString = reverseArrayValues.join('');

    if(str == reverseString) {
        window.document.write('It is a palindrome');
    }
    else {
        window.document.write('It is not a palindrome');
    }
}

if(check){
    checkPalindrome(word);
}
else{
    checkPalindromeonecase(word) ; 
}





