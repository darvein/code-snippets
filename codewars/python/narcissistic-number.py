#!/usr/bin/python
# https://www.codewars.com/kata/5287e858c6b5a9678200083c/train/python

def narcissistic(value):
    tmp = value
    reverse = 0

    while(tmp > 0):
        reverse += (pow (tmp%10, (len(str(value)))) )
        tmp //= 10

    if value == reverse: return True
    return False

print(narcissistic(0))
