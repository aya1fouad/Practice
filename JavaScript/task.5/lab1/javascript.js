function uniCharCode(event) {
   var char = event.which || event.keyCode;
    document.getElementById("demo").innerHTML = "Unicode CHARACTER code: " + char;
    alert("unicode character code " + char);
  }
  
  function uniKeyCode(event) {
    var key = event.keyCode;
    document.getElementById("demo").innerHTML = "Unicode KEY code: " + key;
    switch (key){
      case 16 :alert("it is shift key :" + key);
      break;
      case 17 :alert("it is ctrl  key :" + key);
      break;
      case 18 :alert("it is alt key :" + key);
      break;
      default :alert("Unicode KEY code :" + key);
      break;
    }



  }
/////////////////////////////////////////////////
//function displayunicode(e){
    //var unicode=e.keyCode? e.keyCode : e.charCode;
    //switch (unicode) {
         //case KeyboardEvent.DOM_VK_CONTROL:
               //alert('control!');
             //  break;
           //case KeyboardEvent.DOM_VK_SHIFT:
               //alert('shift!');
             //  break;
           //case KeyboardEvent.DOM_VK_ALT:
            //   alert('alt!');
          //     break;
        //    default:
      //         alert(unicode);
    //           break;
  //     }
    
//}

/////////////////////////////////////////////////////////////
//function detectspecialkeys(e){
    //var evtobj=window.event? event : e
    //if (evtobj.altKey || evtobj.ctrlKey || evtobj.shiftKey){
      //  alert("you pressed one of the 'Alt', 'Ctrl', or 'Shift' keys");
    //}
        
      //  else{
    //        alert(unicode);
  //      }
//}

//document.onkeypress=detectspecialkeys
////////////////////////////////////////////////////////////////////////////////////////