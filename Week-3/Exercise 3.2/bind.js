function sum(a, b) {
    return this.a + this.b;
}

const sumB = sum.bind({a: 100, b: 200});

console.log(sumB());