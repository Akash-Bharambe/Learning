const subscribed = document.getElementById("subscribed");
const card = document.getElementById("card");
const upi = document.getElementById("upi");
const netBanking = document.getElementById("netBanking");
const sub = document.getElementById("sub");
const type = document.getElementById("type");
const submit = document.getElementById("submitpayment");

function random() {
  let max = 999999;
  let min = 100000;
  let random = Math.round(Math.random() * (max - min)) + min;
  document.getElementById("random").textContent = `OTP: ${random}`;
}

submit.onclick = function () {
  if (subscribed.checked) {
    document.getElementById("sub").textContent = `You are Subscribed`;
    document.getElementById("radio").style.display = "none";
  } else {
    document.getElementById("sub").textContent = `You are NOT Subscribed`;
    document.getElementById("radio").style.display = "inline";
    document.getElementById("radio").style.backgroundColor = "black";
    document.getElementById("radio").style.color = "white";
    document.getElementById("type").style.color = "black";
    if (card.checked) {
      document.getElementById("type").textContent = `Enter Card Details`;
      random();
    } else if (upi.checked) {
      document.getElementById("type").textContent = `Enter UPI Details`;
      random();
    } else if (netBanking.checked) {
      document.getElementById("type").textContent = `Enter NetBanking Details`;
      random();
    } else {
      document.getElementById("type").textContent = `Select Payment Type`;
    }
  }


};
let username = window.prompt("Enter Username");
// username= username.trim();
// let first = username.charAt(0);
// let remainder = username.slice(1);

// username = first.toUpperCase() + remainder.toLowerCase();
// username = username.replace(" ", "")

username = (username.trim().charAt(0).toUpperCase() + username.trim().slice(1).toLowerCase()).replace(" ", "");

console.log(username);
