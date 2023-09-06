<?php
// https://www.codewars.com/kata/5264d2b162488dc400000001/train/php

function spinWords(string $str): string {
  $arr = explode(" ", $str);
  foreach($arr as $k => $v) {
    if(strlen($v) >= 5) $arr[$k] = strrev($v);
  }

  return implode(" ", $arr);
}

print(spinWords("the the abcdefg"));
