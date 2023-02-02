// conect html with javascript
const header = document.getElementById("header");
const title = document.getElementById("title");
const excerpt = document.getElementById("excerpt");
const profile_img = document.getElementById("profile_img");
const name = document.getElementById("name");
const date = document.getElementById("date");

const animated_bgs = document.querySelectorAll(".animated-bg");
const animated_bg_texts = document.querySelectorAll(".animated-bg-text");

// get data
setTimeout(getData, 2500);

// set for each js element an html script
function getData() {
  // select variable and get into it's html
  header.innerHTML =
    '<img src="https://images.unsplash.com/photo-1496181133206-80ce9b88a853?ixlib=rb-1.2.1&ixid=eyJhcHBfaWQiOjEyMDd9&auto=format&fit=crop&w=2102&q=80" alt="" />';
  title.innerHTML = "who am i";
  excerpt.innerHTML = "hi i am abdallah";
  profile_img.innerHTML = '<img src="Images/me.jpg" alt="" />';
  name.innerHTML = "Abdallah Abuhassan";
  date.innerHTML = "jan 04, 2004";

  // for each background remove animated background
  animated_bgs.forEach((bg) => bg.classList.remove("animated-bg"));
  animated_bg_texts.forEach((bg) => bg.classList.remove("animated-bg-text"));
}
