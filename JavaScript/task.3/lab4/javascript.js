 do{
        var number =parseInt(window.prompt("enter the number of person"));
    }while(number===null || (isNaN(number))); 
    

 for (var i=0;i<number;i++)
    {

    do{
        name=window.prompt("enter user name :");
    }while((name.length<3 || name.length>10) || name.match(/[^a-zA-Z]/) || name===null || name==="");
    
    document.write("<h3>"+"name of user  is : "+name+"</h3>");
    
    do{
        age=window.prompt("enter user  age :");
    }while(age.match(/[^0-9]/) || (age<10 || age>60) || ( age===null || age===""));
    
    document.write("<h3>"+"age of user  is : "+age+"</h3>");
    }