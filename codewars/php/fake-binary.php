<?php

function fake_bin(string $s): string {
  for ($i = 0; $i < strlen($s); $i++){  
    if ($s[$i] < 5) $s[$i] = 0;
    else $s[$i] = 1;
  }

  return $s;
}

print(fake_bin('45385593107843568'));
print(PHP_EOL);
print('01011110001100111');

?>
