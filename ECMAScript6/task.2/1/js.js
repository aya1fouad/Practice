//////////////(a)///////////////////////
function* fib1(num) {
        let n1 = 0, n2 = 1, swap;
        for (let i = 0; i < num; i ++) {
            yield n1;
            swap = n1;
            n1 = n2;
            n2 = swap +n1 ;
        }
        yield 'End of iterator'  
    }

    let it = fib1(5);

    for (let element of it) {
        console.log(element);
    }
////////////////(b)//////////////////
function* fib2(max) {
    let n1 = 0, n2 = 1, swap=0;
    for (let i = 0; swap < max ; i ++) {
        yield n1;
        swap = n1;
        n1 = n2;
        n2 = swap + n1;
        // console.log(swap)
    }
    yield 'End of iterator'
}

let it2 = fib2(10)
for (let element of it2) {
    console.log(element);
}
