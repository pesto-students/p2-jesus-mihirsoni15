function* doTask1() {
    let num = 1;
    while (true) {
        yield num; //! suspend here
        num = num + 1;
    }
}

function* doTask2(n, iterable) {
    for (const x of iterable) {
        // console.log('take loop');
        if (n <= 0) return;
        n--;
        yield x;
    }
}

const first10 = doTask2(10, doTask1());

for (const el of first10) {
    console.log(el); //! Prints 1 to 10.
}

console.log('second loop');

for (const el of first10) {
    console.log(el); //! This will not get executed as done is true.
}