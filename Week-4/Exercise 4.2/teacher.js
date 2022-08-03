// var Person = function() {};
// Person.prototype.initialize = function (name, age) {
//     console.log(this.name = name);
//     console.log(this.age = age);
// }

// TODO: Create the class Teacher and a method teach
class Teacher {
    constructor(name){
        this.name = name;
    }
    toString () {
        return 'Teacher named ${this.name}'
    }
    static logNames(teachers) {
        for (const teacher of teachers) {
            console.log(teacher.name);
        }
    }
}

class Subject extends Teacher {
    constructor(name, sub) {
        super(name);
        this.sub=sub;
    }
    toString (){
        return '${super.toString()} ($this.sub)';
    }
}

const e = new Subject('Jesus'. 'JS');
console.log(e.toString());
// console.log(e);
// e.printsub();
// e.printName();


// var him = new Teacher();

// him.name("Adam",45);
// him.teach("Inheritance");