<?php
function isPalindrome($x) {
  $rev = 0;

  if ($x < 0 || ($x % 10 == 0 && $x != 0)) {
    return false;
  }

  while($x > $rev){
    $digit = $x % 10;
    $rev = $rev * 10 + $digit;
    $x = (int)$x / 10;
  }

  if ($x == $rev || ($x == (int)$rev/10)) {
    return true;
  }

  return false;
}

var_dump(isPalindrome(10));
