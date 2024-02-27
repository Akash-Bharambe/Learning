console.clear();
function roll() {
  const input = document.getElementById("input").value;
  const rollText = document.getElementById("rollText");
  const img = document.getElementById("img");

  let values = [];
  let images = [];
  let total = 0;

  for (let i = 0; i < input; i++) {
    const value = Math.floor(Math.random() * 6) + 1;
    total += value;
    console.log(value);
    values.push(value);
    images.push(
      `<img src = "img/inverted-dice-${value}.png" alt="Dice ${value}">`
    );
  }

  rollText.textContent = `Total: ${total}`;
  img.innerHTML = images.join(``);
}
