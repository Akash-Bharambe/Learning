document.addEventListener("keydown", (k) => {
  if (k.code.includes("Digit") || k.code.includes("Numpad")) {
    console.log(k.code);
  }
});

let turbo =  98;
console.log(turbo);