# https://www.codewars.com/kata/54a91a4883a7de5d7800009c/train/python

import sys

def increment_string(strng):
    if len(strng) == 0: return "1"

    num = ""
    for i in range(len(strng)-1, 0, -1):
        if strng[i] in "1234567890":
            num += strng[i]
    num = num[::-1]

    if num == "": num = "0"
    inc = (int(num)) + 1

    newstr = strng.replace(str(num), "")
    newstr += str(inc).zfill(len(num))
    return newstr

print(increment_string("11"))
