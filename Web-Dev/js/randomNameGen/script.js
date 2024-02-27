const word1 = ["Apple", "Banana", "Orange"];
const word2 = ["Dog", "Cat", "Mouse"];
const word3 = ["Car", "Bike", "Jet"];

let randoms = [];

function nameGen(word) {
  const random = Math.floor(Math.random() * word.length);
  return randoms.push(word[random]);
}

nameGen(word1);
nameGen(word2);
nameGen(word3);

console.log(randoms.join(" "));
