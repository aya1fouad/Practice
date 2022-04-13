function shape(width,height){
    this.width=width;
    this.height=height;
    this.area=function(){
        return this.width*this.height;
    };
    this.primeter=function(){
        return this.width*this.height*0.5;
    };
    this.displayInfo=function(){
      console.log("the width is:"+this.width);
      console.log("the height is:"+this.height);
      console.log("the area is:"+this.area());
      console.log("the primeter is:"+this.primeter());
    };
  
}
/////////////////////////////////////////////
var rectangle= new shape(5,7);
console.log(rectangle.displayInfo());
////////////////////////////////////////


