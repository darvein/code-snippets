def is_palindrome(x)
  rev = 0

  if x < 0 || (x % 10 == 0 and x != 0)
    return false
  end

  while x > rev
    digit = x % 10
    rev = rev * 10 + digit
    x = x / 10
  end

  if x == rev or (x == rev / 10)
    return true
  end

  return false
end

print(is_palindrome(1111))
