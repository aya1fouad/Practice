var fruits = ["apple", "strawberry", "banana", "orange",
"mango"];
////////////(a)////////////////
function check(x) {
    return x.every(i => (typeof i === "string"));
}
check(fruits);
/////////////(b)/////////////////
function test(x) {
    return x.some(i => (i.startsWith("a")));
}
test(fruits);
/////////////////(c)//////////////////
function generate(x) {
    return x.filter(i => (i.startsWith("a")||i.startsWith("b")));
}
generate(fruits);
/////////////////////////(d)////////////////
function generating(x) {
    return x.map(i => ('i like'+i+'fruits'));
}
var newfruits =generating(fruits);
///////////////(e)///////////////////
function display(x) {
    return x.forEach(i => {
        console.log(i)
    });
}
display(newfruits);