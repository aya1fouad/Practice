var win,i=0,d,c;
function Show()
{
  win=window.open("msg.html", "", "width =300px,height=300px");
}

function ClosePage()
{
 window.close();
 clearTimeout(c);
}

function displayMsg()
{ 
    var str="Work hard for what you want because it won't come to you without a fight. You have to be strong and courageous and know that you can do anything you put your mind to. If somebody puts you down or criticizes you, just keep on believing in yourself and turn it into something positive.";
    var ch=str.substring(i++,i);
    document.write(ch);
    if(ch)  
    {
        console.log(i);
        console.log(str.length);
      d=  setTimeout(displayMsg, 300);
    }
      else
    {
      c=setTimeout(ClosePage,500);
    } 
}

