Count= (function () {
    var counter= 0;
    return function () {
        counter++;
        console.log(counter);
        return counter;
    }
})();
////////////////////////////////////
function Shape(width, height) {
    this.width = width;
    this.height = height;
    if (this.constructor === Shape) {
        throw (" you can not make object");
    }
}
/////////////////////////////////
Shape.prototype.Perimeter = function () {
    return this.width*this.height* 2;
}
////////////////////////////////////
Shape.prototype.Area = function () {
    return this.width * this.height;
}
/////////////////////////////////////////////////
Shape.prototype.toString = function () {
    console.log("width:"+this.width+",height:"+this.height+",perimeter:"+ this.Perimeter()+",area:"+this.Area());
}
/////////////////////////////////////////
function Rectangle(width, height) {
    Shape.call(this, width, height);
    this.counter = Count();
    if (this.counter > 1 && this.constructor == Rectangle){
        throw ("you can create one rectangle only");
    }
}
////////////////////////////////////
Rectangle.prototype = Object.create(Shape.prototype);
Rectangle.prototype.constructor = Rectangle;
///////////////////////////////////////
//////////////////////////////////////
function Square(length){
    Rectangle.call(this, length, length);
    if (this.counter > 2 && this.constructor == Square) {
        throw ("you can create one square only");
    }
}
/////////////////////////////////
Square.prototype = Object.create(Rectangle.prototype);
Square.prototype.constructor = Square;
//////////////////////////////////
/////////////////////////////////
var rect1= new Rectangle(5,7);
rect1.toString();

var rect2= new Rectangle(4,6);
rect2.toString();
///////////////////////////
var s1= new Square(4);
s.toString();

var s2 = new Square(3);
s.toString();
//////////////////////////
var shp1= new Shape(5,3);
shp1.toString();

var shp2= new Shape(8,4);
shp2.toString();
