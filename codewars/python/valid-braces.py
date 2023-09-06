#!/usr/bin/env python
# https://www.codewars.com/kata/5277c8a221e209d3f6000b56/train/python

def validBraces(string):
    braces = []
    bmap = {'[': ']', '(': ')', '{': '}'}

    for b in string:
        if b in ')}]':
            if len(braces) == 0: return False

            brace = braces.pop()
            if b != bmap[brace]: return False
        else:
            braces.append(b)

    if len(braces) != 0: return False

    return True

#print(validBraces(")(}{]["))
#print(validBraces("())({}}{()][]["))
