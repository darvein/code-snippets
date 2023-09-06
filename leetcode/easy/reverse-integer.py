def reverse(x):
    rev = 0
    sign = -1 if x < 0 else 1

    x = abs(x)
    while(x > 0):
        lastd = x % 10
        x = int(x / 10)
        rev = (rev * 10) + lastd

    rev = rev * sign
    if rev > 0x7fffffff or rev < -0x80000000:
        return 0
    return rev

print(reverse(-9463847412))
