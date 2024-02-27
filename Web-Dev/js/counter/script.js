let count = 0;
const countLabel = document.getElementById("count");

document.getElementById("decrease").onclick = () => {
  count--;
  countLabel.textContent = count;
};
document.getElementById("reset").onclick = () => {
  count = 0;
  countLabel.textContent = count;
};
document.getElementById("increase").onclick = () => {
  count++;
  countLabel.textContent = count;
};
