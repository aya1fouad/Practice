function objec(){
    this.getSetGen= function(){
        var key=Object.getOwnPropertyNames(this);

        for(key in this){

            if(key !="getSetGen"){

                Object.defineProperty(this,"set"+key,{
                    value:function(value){
                        this[key]=value;   }   });

               Object.defineProperty(this,"get"+key,{
                    value: function(){
                         return this[key]; } });       

            }
        }
    }
}
/////////////////////////////////////////
// var user =new Object();
// var user2=new objec();
// user2.getSetGen.call(user,"name","age");
/////////////////////////
var user ={id:"sd=10",addr:"123st",location:"sv"};
var obj=new objec();
obj.getSetGen();
obj.getSetGen.call(user);