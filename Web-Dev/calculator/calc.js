// let display = document.getElementById("display").value;
// let answer ;
// const clear = document.getElementById("clear");

// clear.onclick = function(){
//     document.getElementById("display").textContent = null;
// }

// document.getElementById("answer").onclick = function(){
//     let answer = document.getElementById("display").value;
//     document.getElementById("display").textContent = answer;
// }

let displayValue = "";

function appendToDisplay(value) {
  displayValue += value;
  updateDisplay();
}

function clearDisplay() {
  displayValue = "";
  updateDisplay();
}

function calculateResult() {
  try {
    displayValue = eval(displayValue).toString();
    updateDisplay();
  } catch (error) {
    displayValue = "Error";
    updateDisplay();
  }
}

function updateDisplay() {
  const display = document.getElementById("display");
  display.textContent = displayValue;
}

document.addEventListener("keydown", (k) => {
  if (k.key === 'Enter' || k.key === '=') {
    calculateResult();
//   } else if(k.key == '1' || k.key == '2' || k.key == '3' || k.key == '4' || k.key == '5' || k.key == '6' || k.key == '7' || k.key == '8' || k.key == '9' || k.key == '0' || k.key == '+' || k.key == '-' || k.key == '*' || k.key == '/' || k.key == '%' || k.key == '(' || k.key == ')' || k.key == '.'){
//       appendToDisplay(k.key);
  } else if(k.key == '+' || k.key == '-' || k.key == '*' || k.key == '/' || k.key == '%' || k.key == '(' || k.key == ')' ||k.key === '.' || (k.key >= '0' && k.key <= '9')){
    appendToDisplay(k.key);
  }
  else{
    clearDisplay()
  }
});