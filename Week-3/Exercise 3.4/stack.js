function createStack() {
  let items = [];
  return {
    push(item) {
      items.push(item);
    },
    pop() {
      return items.pop();
    },
  };
}
console.log(this); // Global Obj Ref
const stack = createStack();

stack.push(10);

stack.push(5);
// console.log(this)
// console.log(stack)

stack.pop(); // => 5
console.log(stack.items); // => [10]
stack.items = [10, 100, 1000]; // Encapsulation broken!
console.log(stack.items);
console.log(stack);