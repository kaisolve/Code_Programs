// querySelector returns the first element in the document
// that match what is in ('')
const loadText = document.querySelector(".load");
const background = document.querySelector(".background");

let load = 0;

// make the background blur at 30 degree
let backgroundimg = setInterval(blurring, 30);

// increase the loading function
function blurring() {
  load++;

  // show the img if after hitting 99
  if (load > 99) {
    clearInterval(backgroundimg);
  }

  // go to load
  loadText.innerText = `${load}%`;
  // set opacity
  loadText.style.opacity = scale(load, 0, 100, 1, 0);
  // set filter the blur and the background
  background.style.filter = `blur(${scale(load, 0, 100, 30, 0)}px)`;
}

// map a range of numbers to another range of numbers
const scale = (num, in_min, in_max, out_min, out_max) => {
  // return the load after decreasing opacity and blurring
  return ((num - in_min) * (out_max - out_min)) / (in_max - in_min) + out_min;
};
