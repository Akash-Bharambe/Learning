let random = Math.floor(Math.random()*100)+1;
console.log(random);

const number1 = window.prompt("Enter Number 1");
const number2 = window.prompt("Enter Number 2");
let operation = window.prompt("Enter Operation");

const fault = {
    "+" : "-",
    "*" : "**",
    "/" : "+",
    "-" : "/"
}

if (random<=50) {
    let operation1 = fault[operation];
    window.alert(`Result: ${number1} ${operation} ${number2} = ${eval(`${number1} ${operation1} ${number2}`)}`);
    
} else {
    window.alert(`Result: ${eval(`${number1} ${operation} ${number2}`)}`);
}
