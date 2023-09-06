<?php
class Solution {

  function romanToInt($s) {
    $romanNumber = 0;
    $romans = array(
      'I' => 1,
      'V' => 5,
      'X' => 10,
      'L' => 50,
      'C' => 100,
      'D' => 500,
      'M' => 1000,
    );

    for($i = 0; $i < strlen($s); $i++){
      if ($i < strlen($s)-1 && $romans[$s[$i]] < $romans[$s[$i+1]]) {
        $romanNumber -= $romans[$s[$i]];
      } else {
        $romanNumber += $romans[$s[$i]];
      }
    }
    return $romanNumber;
  }
}


print(Solution::romanToInt("IV"));
