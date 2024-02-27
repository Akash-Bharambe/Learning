function createCard(title, channelName, views, monthsOld, duration, thumbnail) {
  let viewsConverted = "";
  if (views >= 1000 && views < 1000000) {
    viewsConverted = `${views / 1000}k views`;
  } else if (views >= 1000000) {
    viewsConverted = `${views / 1000000}M views`;
  } else {
    viewsConverted = `${views} views`;
  }

  let card = `<div class="card"><div class="img"><img src="${thumbnail}" alt="thumbnail"><span>${duration}</span></div><div class="contents"><span>${title}</span><span>${channelName} * ${viewsConverted} * ${monthsOld}</span></div></div>`;

  document.getElementById("container").innerHTML += card;
}

createCard(
  "Aakash Bharambe",
  "Ash King",
  1340000,
  "2 Months Old",
  "18:54",
  "https://cdn.pixabay.com/photo/2015/04/23/22/00/tree-736885_1280.jpg"
);

createCard(
  "Aakash Bharambe | #2",
  "Ash King",
  13000000,
  "2 Months Old",
  "15:98:54",
  "https://images.unsplash.com/photo-1503023345310-bd7c1de61c7d?q=80&w=1000&auto=format&fit=crop&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxzZWFyY2h8Mnx8aHVtYW58ZW58MHx8MHx8fDA%3D"
);
