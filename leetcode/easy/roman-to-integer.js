var romanToInt = function(s) {
  let romanNumber = 0;
  let romans =  {
    'I': 1,
    'V': 5,
    'X': 10,
    'L': 50,
    'C': 100,
    'D': 500,
    'M': 1000,
  };

  for (let i = 0, len = s.length; i < len; i++) {
    if (i < s.length+1 &&
      romans[s[i]] < romans[s[i+1]])
      romanNumber -= romans[s[i]];
    else
      romanNumber += romans[s[i]];
  }
  return romanNumber;
};

console.log(romanToInt("III"));
console.log(romanToInt("IV"));
console.log(romanToInt("IX"));
console.log(romanToInt("LVIII"));
console.log(romanToInt("MCMXCIV"));
