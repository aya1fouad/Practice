let object = {
    name: "aya",
    age: 22
}
////////////////////////////////////////////
function itera() {
    let i =0 , key , valuee;
    let arr = Object.keys(object);
    let it = {
        next: function () {
            if(i<arr.length){
                key= Object.keys(object)[i];
                valuee=Object.values(object)[i];
                i++;
                return {
                    value: [key, valuee],
                             done: false
            }
        }
            return {
                value: undefined,
                done: true
            }
        }
    }
    return it
}
////////////////////////////////////////////
object[Symbol.iterator] = itera;
//////////////////////////////////
for (let element of object) {            
     console.log(element)

}
