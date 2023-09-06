# https://www.codewars.com/kata/514b92a657cdc65150000006/train/python

def solution(number):
    r = set()
    for i in range(1, number):
        if (i%3==0 or i%5==0): 
            r.add(i)
            print(i)

    return sum(i for i in r)

    # best solution
    # return sum(x for x in range(number) if x % 3 == 0 or x % 5 == 0)

# test
# print(solution(int(input())))
