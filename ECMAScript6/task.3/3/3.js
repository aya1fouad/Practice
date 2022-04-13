let obj={
    name:"aya",
    address:"suez",
    age:"26"
}
///////////////////////////////////////////////
let handler=
{
    set:function(target,prop,value){
      if(prop==="name"){
          if(typeof(value)!="string"||value.length<7||value.length<7){
            throw 'name accepts only string of 7 characters';
          }
          else{
            target[prop]=value;
          }
      }

      else if(prop==="address"){
             if(!isNaN(value)){
                throw'address accepts only string value';
             }
             else{
                target[prop]=value;
             }
      }

      else if(prop==="age"){
          if(isNaN(value)||value>60||value<25){
            throw' age accepts numerical value between 25 and 60'
          }
          else{
            target[prop]=value;
          }
      }
    },

    get:function(target,prop)
    {
        return target[prop];
    }
}
///////////////////////////////////////////////////////////////////////
let objProxy =new Proxy(obj,handler);
objProxy.name="ayaaaaa";
console.log(objProxy.name);
objProxy.address="suez";
console.log(objProxy.address);
objProxy.age=26;
console.log(objProxy.age);
////////////////////////////////////////////////////

