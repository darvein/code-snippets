// https://leetcode.com/problems/fizz-buzz/submissions/

var fizzBuzz = function(n) {
  let ret = [];

  for(let i = 1; i <= n; i++){
    if(i % 15 == 0) ret.push("FizzBuzz");
    else if(i % 5 == 0) ret.push("Buzz");
    else if(i % 3 == 0) ret.push("Fizz");
    else ret.push(''+i);
  }

  return ret;
};

console.log(fizzBuzz(3));
