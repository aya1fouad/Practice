Count=(function(){
    var counter=0;
    return function(){
        counter++;
        console.log(counter);
        return counter;
    }
})();
///////////////////////////////////////////////////
function Rectangle(width,height){
    this.width=width;
    this.height=height;
    this.counter=Count();
}
//////////////////////////////////////////////
Rectangle.prototype.Perimeter=function(){
    return this.width*this.height*0.5;
}
///////////////////////////////////////////
Rectangle.prototype.Area=function(){
    return this.width*this.height ;
}
////////////////////////////////////
Rectangle.prototype.toString=function(){
    console.log("width:"+this.width+",height:"+this.height+"area:"+this.Area()+",perimeter:"+this.Perimeter());
}
//////////////////////////////////////////
var rect =new Rectangle(5,7);
rect.Area();
rect.Perimeter();
rect.toString();
////////////////////
