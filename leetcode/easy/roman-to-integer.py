def romanToInt(s) -> int:
    romanNumber = 0
    romans = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000,
            }

    for i in range(0, len(s)):
        if i < len(s)-1 and romans[s[i]] < romans[s[i+1]]:
            romanNumber -= romans[s[i]]
        else:
            romanNumber += romans[s[i]]

    return romanNumber

print(romanToInt("III"))
print(romanToInt("IV"))
print(romanToInt("IX"))
print(romanToInt("LVIII"))
print(romanToInt("MCMXCIV"))
