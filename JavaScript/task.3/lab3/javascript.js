function reverse (){
   do{
        var n =parseInt(window.prompt("enter the number of elements"));

        }while(n===null || n==="" ||isNaN(n)==true);

        var arr=[n]; 

        for (var i=0 ;i<n ; i++){
            do{
               arr[i]= window.prompt("enter element");
                if(isNaN(arr[i])==true){
                    alert("please enter numbers only")
                }
            }while(arr[i]===null || arr[i]==="" ||isNaN(arr[i])==true);
            arr[i]=parseInt(arr[i]);
    }
    arr=arr.reverse();
return arr;
}

document.write(reverse());