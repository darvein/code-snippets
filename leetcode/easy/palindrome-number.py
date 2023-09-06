def isPalindrome(x):
    rev = 0

    if x < 0 or (x % 10 == 0 and x != 0):
        return False

    while(x > rev):
        digit = x % 10
        rev = rev * 10 + digit
        x = x // 10

    if x == rev or x == (rev // 10):
        return True

    return False

print(isPalindrome(11))
