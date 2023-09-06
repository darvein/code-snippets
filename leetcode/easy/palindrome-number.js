var isPalindrome = function(x) {
  let rev = 0;

  if (x < 0 || (x % 10 == 0 && x != 0)) {
    return false;
  }

  while(x > rev){
    let digit = x % 10;
    rev = rev * 10 + digit;
    x = Math.floor(x/10);
  }

  if (x == rev || (x == Math.floor(rev/10))) {
    return true;
  }

  return false;
};

console.log(isPalindrome(-121));
