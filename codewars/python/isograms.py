#https://www.codewars.com/kata/54ba84be607a92aa900000f1/train/python

# clever: return len(string) == len(set(string.lower()))
def is_isogram(string):
    for i in range(len(string)):
        for j in range(i+1, len(string)):
            if string[i].lower() == string[j].lower(): return False
    return True

# print(is_isogram("Dermatoglyphics"))
# print(is_isogram("aba"))
# print(is_isogram("moOse"))
# print(is_isogram("moseo"))
