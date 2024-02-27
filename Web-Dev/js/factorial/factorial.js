const number = window.prompt("Enter Number");
let factorial = 1;

for (let i = number; i >= 1; i--) {
  factorial *= i;
}

console.log(factorial);

/*
 * Array.from => create array of length "Array(Number(number)+1)"
 * keys() is iterator of that array
 * slice(1) removes the arrays element before 1 index
*/

let arr = Array.from(Array(Number(number)+1).keys()).slice(1).reduce((a,b)=> a*b)

console.log(arr)