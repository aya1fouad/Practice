
function EnterNumber(numb){
    document.getElementById("Answer").value += numb;
}

function EnterOperator(operator){
    document.getElementById("Answer").value += operator;
}

function EnterClear(){
  document.getElementById("Answer").value = "";

}

function EnterEqual(equal){
var x= document.getElementById("Answer").value;
document.getElementById("Answer").value=eval(x);
}