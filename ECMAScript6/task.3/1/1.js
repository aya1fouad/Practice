class Polygon{
    constructor(_dim1=0,_dim2=0){
        if(new.target=== Polygon)
         throw'abstract class'
        this.dim1=_dim1;
        this.dim2=_dim2;
    }

   area(){
       return 0;
         }

   Draw(){
        }
}
///////////////////////////////////////////////////////////////////
class Rectangle extends Polygon{
    constructor(_w,_h){
        super(_w,_h)
    }

  area(){
    return this.dim1*this.dim2;
  }

  toString(){
      console.log("rectangle width:"+this.dim1,",height:"+this.dim2 );
      console.log("rectangle area= " +this.area());
  }

  Draw(){
    var canvas = document.getElementById('Canvas1');
      var ctx = canvas.getContext('2d');
      ctx.strokeRect( 50, 50,this.dim1,this.dim2);
      // ctx.stroke();
      // ctx.fill();
  }

}
/////////////////////////////////////////////////////
class Square extends Polygon{
    constructor(_dim){
        super(_dim,_dim)
    }

  area(){
    return this.dim1*this.dim2;
  }
  toString(){
    console.log("Square dimention:"+this.dim1);
      console.log("Square area=" +this.area());
  }

  Draw(){
    var canvas = document.getElementById('Canvas2');
      var ctx = canvas.getContext('2d');
      ctx.strokeRect( 50, 50,this.dim1,this.dim2);
      // ctx.stroke();
      // ctx.fill(); 
  }

}
/////////////////////////////////////////////
class Triangle extends Polygon{
    constructor(_base,_h){
        super(_base,_h)
    }

  area(){
    return 0.5*this.dim1*this.dim2;
  }
  toString(){
    console.log("Triangle base:"+this.dim1,",height:"+this.dim2 );
    console.log("Triangle area=" +this.area());
  }

  Draw(){
    var canvas = document.getElementById('Canvas3');
    var ctx = canvas.getContext('2d');
    ctx.beginPath();
    ctx.moveTo(85,85);
    ctx.lineTo(20,85);
    ctx.lineTo(10,35);
    ctx.stroke();
    ctx.fill();
  }

}
////////////////////////////////////////////////////////////////////////
class Circle extends Polygon{
    constructor(_r){
        super(_r,_r);
    }

  area(){
    return Math.PI*this.dim1*this.dim2;
  }
  toString(){
      console.log("Circle Radius:"+this.dim1);
      console.log("Circle area=" +this.area());
  }

  Draw(){
    var c = document.getElementById("Canvas4");
    var ctx = c.getContext("2d");
    ctx.beginPath();
    ctx.arc(100, 75, this.dim1, 0, 2 * Math.PI);
    ctx.stroke();
    // ctx.fill();
  }

}
////////////////////////////////////////////////////
let rect=new Rectangle(40,60);
rect.toString();
rect.Draw()

let tri=new Triangle(5,3);
tri.toString();
tri.Draw()

let cir=new Circle(30);
cir.toString();
cir.Draw()
let squ=new Square(30);
squ.toString()
squ.Draw()

