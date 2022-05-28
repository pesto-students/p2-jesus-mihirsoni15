function greet(name){
    var reply = [
        name,
        this.animal,
        'typically sleep between',
        this.sleepDuration,
    ].join(' ');

    console.log(reply);
}

var cats = {
    animal: 'cats', sleepDuration: '12 and 6 Hours'
}

var dogs ={
    animal: 'dogs', sleepDuration: '2 to 5 Hours'
}

greet.call(cats, 'abc');
greet.call(dogs, 'xyz');