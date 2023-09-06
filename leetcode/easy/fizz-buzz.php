<?php

/**
 * Notes:
 * consider to fill an arra first with:
 * array_fill(1, $n, 'Fizz')
 */

class Solution {
  function fizzBuzz($n) {
    $ret = array();
    for($i = 1; $i <= $n; ++$i){
      if($i % 15 == 0) array_push($ret, "FizzBuzz");
      else if($i % 5 == 0) array_push($ret, "Buzz");
      else if($i % 3 == 0) array_push($ret, "Fizz");
      else array_push($ret, (string)$i);
    }
    return $ret;
  }
}

print_r(Solution::fizzBuzz(1));
