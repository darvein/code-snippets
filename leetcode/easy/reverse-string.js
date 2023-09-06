// i don't know why it doesn't work locally with /usr/bin/node
// but works fine on leetcode platform

var reverseString = function(s) {
  let left = 0;
  let right = s.length - 1;

  for (var i = 0, len = s.length / 2; i < len; i++) {
    [s[left], s[right]] = [s[right], s[left]];
    left++;
    right--;
  }
};

let word = "hello";
reverseString(word);
console.log(word);
