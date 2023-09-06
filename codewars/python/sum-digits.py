# https://www.codewars.com/kata/52f3149496de55aded000410/train/python

def sum_digits(number):
    digits_sum = 0

    if number < 0:
        number = number * -1

    while(number > 0 ):
        digit = number % 10
        digits_sum = digits_sum + digit
        number = number // 10

    return digits_sum

# print(sum_digits(10))
# print(sum_digits(99))
# print(sum_digits(-32))
