function Book(title, numOfChap, author, numOfPages, publisher, numOfCopies,){
    this.title = title;
    this.numOfChap = numOfChap;
    this.author = author;
    this.numOfPages = numOfPages;
    this.publisher = publisher;
    this.numOfCopies = numOfCopies;
}
///////////////////////////////////////////////
function Box(height, width, length, volume, material){
    this.height = height;
    this.width = width;
    this.length = length;
    this.volume = volume;
    this.material = material;
    this.numOfBooks = num;
    this.content = new Array;
    var num = 0;
    Box.totalnum= 0;

    this.addBook =function(book){
        this.numOfBooks++;
        this.content.push(book); 
        Box.totalnum++;
    }

    Box.prototype.valueof =function(){
        console.log("Total num of books:"+Box.totalnum);
    }

}
//////////////////////////////////////////////////
Box.prototype.toString =function(){
    console.log("num of books in box:"+this.numOfBooks+",height:"+this.height+ ",width:"+ this.width+",length:"+this.length);
    
}
/////////////////////////////////////////////////////////
var book1 = new Book("Eat", 8, "ahmed", 90, "elshrouk", 1);
var book2 = new Book("Pray", 10, "ali", 111, "elkarma", 10);
var book3 = new Book("Love", 6, "mohamed",75, "elmagd", 28);

var box1 = new Box(10, 20, 30, 40, "paper");
var box2 = new Box(50, 60, 70, 80, "plastic");

box1.addBook(book1);
box1.addBook(book2);
box2.addBook(book3);

box1.toString();
box2.toString();

box1.valueof();
box2.valueof();