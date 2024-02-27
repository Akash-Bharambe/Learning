function generatePassword(length, incLower, incUpper, incNumber, incSymbol) {
  const lowercase = "abcdefghijklmnopqrstuvwxyz";
  const uppercase = "ABCDEFGHIJLMNOPQRSTUVWXYZ";
  const number = "123456789012345678901234567890";
  const symbol = "!@#$%^&()_+-=.~:;><*";

  let allowedChars = "";
  let password = "";

  allowedChars += incLower ? lowercase : "";
  allowedChars += incUpper ? uppercase : "";
  allowedChars += incNumber ? number : "";
  allowedChars += incSymbol ? symbol : "";

  if (length <= 0) {
    console.log("Password Length should be greater than 0");
  } else if (allowedChars.length === 0) {
    console.log("Password Length should be greater than 0");
  } else {
    for (let index = 0; index < length; index++) {
      const randomIndex = Math.floor(Math.random() * allowedChars.length);
      password += allowedChars[randomIndex];
    }
  }
  return password;
}
const length = 12;
const incLower = true;
const incUpper = true;
const incNumber = true;
const incSymbol = true;

const password = generatePassword(
  length,
  incLower,
  incUpper,
  incNumber,
  incSymbol
);
console.log(`Password: ${password}`);
