### -----------------------------------------------------------------
### oneline condition
x = 1 if True else 0
# 1

### -----------------------------------------------------------------
### large numbers
a = 1_000
b = 10_000_000_000
# print(f'{a+b:,}') 
# 10,000,001,000

### -----------------------------------------------------------------
### Open/Close file using context is a best-practice
with open("python-tricks1.py", "r") as f:
    file_contents = f.read()
# print(len(file_contents.split(' ')))
# 101

### -----------------------------------------------------------------
### Lists: access to indexes
names = ["hendrix", "cobain", "lenon"]
for index, name in enumerate(names, start=1):
    pass
    # print(f'{index} {name}')
# 1 hendrix
# 2 cobain
# 3 lenon

### -----------------------------------------------------------------
### Lists: access to the same idx on both equal-size lists
# zip() by default ends with the most small list size
years = ["80s", "90s", "00s"]
genres = ["rock", "grunge", "electronic"]
bands = ["zeppelin", "nirvana", "muse"]
for year, genre, band in zip(years, genres, bands):
    pass
    # print(f'{year} : {band} is {genre}')
# 80s : zeppelin is rock
# 90s : nirvana is grunge
# 00s : muse is electronic

### -----------------------------------------------------------------


#!/usr/bin/env python

### Concat strings
letters = ['a', 'b', 'c', 'd']
# print("".join(letters))
# abcd

### List comprehensions
# print([x ** 2 for x in range(5)])
# print([x for x in range(10) if x % 2 == 0])
# [0, 1, 4, 9, 16]
# [0, 2, 4, 6, 8]

### Itertools.combinations(), max combinations possible
import itertools
teams = ['team1', 'team2', 'team3']
# print((list(itertools.combinations(teams, r=2))))
# [('team1', 'team2'), ('team1', 'team3'), ('team2', 'team3')]

### Collections.countercount(), count duplicated items
from collections import Counter
# print(Counter(['a', 'b', 'b', 'c', 'b', 'd', 'e']))
# Counter({'b': 3, 'a': 1, 'c': 1, 'd': 1, 'e': 1})

### Convert two lists in a dict
partidos = ["mas", "mnr", "podemos"]
votos = [90, 30, 100]
# print(dict(zip(partidos, votos)))
# {'mas': 90, 'mnr': 30, 'podemos': 100}

### all() and any()
x = [True, True, False]
# print(any(x))
# print(all(x))
# True
# False

### Collections OrderedDict and Counter
from collections import OrderedDict, Counter
# print(OrderedDict(a=1, b=2, c=3)) # keeps the order
# print(Counter("aabcccde")) # counts frequency
# OrderedDict([('a', 1), ('b', 2), ('c', 3)])
# Counter({'c': 3, 'a': 2, 'b': 1, 'd': 1, 'e': 1})

### Map and Lambda
x = [1, 2, 3]
y = map(lambda x : x + 1, x)
# for z in y: print(z)
# 2
# 3
# 4

### Shell functions
import sh
# print(sh.whoami()) 
# n0kt

### Random UUID
import uuid
# print(uuid.uuid4()) # randomized 128-bit number
# a5af587b-62fe-40ac-a3d0-7aa45a5beb69


#!/usr/bin/env python

### -------------------------------------------------------
### operator obj.sort()
# Sort multiple keys from a dict
import operator
personas = [
        { 'nombre': 'juan', 'edad': 21 },
        { 'nombre': 'andres', 'edad': 91 },
        { 'nombre': 'maria', 'edad': 11 },
        { 'nombre': 'prudencia', 'edad': 22 },
        ]
personas.sort(key=operator.itemgetter('nombre'))
personas.sort(key=operator.itemgetter('edad'))
# [{'nombre': 'maria', 'edad': 11}, {'nombre': 'juan', 'edad': 21}, {'nombre': 'prudencia', 'edad': 22}, {'nombre': 'andres', 'edad': 91}]


### -------------------------------------------------------
### List comprehension
# complex example
def a_function(x): return x + 1
data = [a_function(i) for i in range(10) if i % 2 == 0]
# [1, 3, 5, 7, 9]


### -------------------------------------------------------
### Check memory usage for an object in bytes
import sys
list_a = sys.getsizeof(range(10_000)) # a class reference
list_b = sys.getsizeof([x for x in range(10_000)]) # actual complete list
# 48
# 87616

### -------------------------------------------------------
### Most frequently ocurring value
from collections import Counter
numbers = [1, 4, 3, 2, 2, 2, 3, 1, 4, 4, 4, 5, 5]
# print(Counter(numbers).most_common(1))
# [(4, 4)]


#!/usr/bin/env python

### ----------------------------------------------
### Most common item in a list
numbers = [1, 2, 2, 4, 3, 2, 2, 9, 0, 2, 9, 6, 2]
# print(max(set(numbers), key=numbers.count))
# 2

### ----------------------------------------------
### Unpack variables
one, two, *rest = (1, 2, 2, 4, 3, 2, 2, 9, 0)
# print(one, two, rest)
# 1 2 [2, 4, 3, 2, 2, 9, 0]

### ----------------------------------------------
### Help
# help(str)
# help(False)

### ----------------------------------------------
### Check if substring exists in a string
text = "mi mama me mima"
if "mama" not in text: print("what?")

### ----------------------------------------------
### Read passwords, alternative to input()
from getpass import getpass
# print(getpass())

### ----------------------------------------------
### reverse a string lol
# print("this is it"[::-1])
# ti si siht

### ----------------------------------------------
### Convert list to string
# print('-'.join(['ola', 'q', 'hace']))
# ola-q-hace

### ----------------------------------------------
### Get a specific value from a key in a dict
prices = { 'coffe': 1.20, 'burrito': 10.80 }
# print(prices.get('chocolatey', 100))
# 100

### ----------------------------------------------
### Try/Catch/Else
try:
    result = 1 / 1
except:
    print('cannot divide')
else:
    pass
    # print('looks we are good: {}'.format(result))
# looks we are good: 1.0

### ----------------------------------------------
### Commons between two lists
frutas_1 = ['manzana', 'quiwi', 'sandia', 'achachairu']
frutas_2 = ['naranja',  'achachairu', 'papaya', 'manga']
# print(set(frutas_1) & set(frutas_2))
# {'achachairu'}

### ----------------------------------------------
### Print without newlien
# print('oli', end='')

### ----------------------------------------------
### map() and lambda
# Get the first letter capitalized from a list
nombres = ['luli', 'michelle', 'dennis']
apellidos = ['huanca', 'ruiz', 'ruiz']
# print(list(map(lambda n, a: n[0].upper() + a[0], nombres, apellidos)))
# ['Lh', 'Mr', 'Dr']


