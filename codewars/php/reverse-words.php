<?php
// https://www.codewars.com/kata/5259b20d6021e9e14c0010d4/train/php

function reverseWords($str) {
  $arr = explode(" ", $str);

  foreach($arr as $k => $v) {
    $arr[$k] = strrev($v);
  }
  
  return implode(" ", $arr);
}

//reverseWords("what ok okk no");
