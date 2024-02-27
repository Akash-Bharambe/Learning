const min = 1;
const max = 100;
const number = Math.floor(Math.random() * (max - min + 1) + min);

let attempts = 0;
let guess;
let isCorrect = false;

while (!isCorrect) {
  guess = window.prompt(`Enter a Number Between ${min} - ${max}`);
  guess = Number(guess);

  if (isNaN(guess)) {
    window.alert("Enter Valid Number");
  } else if (guess > max || guess < min) {
    window.alert("Enter Valid Number");
  } else {
    attempts++;
    if (guess > number) {
      window.alert("Too High!!");
    } else if (guess < number) {
      window.alert("Too Low!!");
    } else {
      window.alert(`${number} is Correct YOU Won!! You took ${attempts} attempts`);
      isCorrect = true;
    }
  }
}
