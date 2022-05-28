function createStack() {
    return {
        items: 0;
        push(item){
            this.items.push(item);
        }
        pop() {
            return this.items.pop();
        }
    };
}
const stack = createStack();
stack.push(10);
stack.push(5);
stack.pop();
stack.items;
stack.items=[10,100,1000];

function createStack();
stack.push(10);
stack.push(5);
stack.pop();
stack.items;
stack.items
