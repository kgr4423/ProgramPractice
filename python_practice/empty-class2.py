class Empty : pass

calc = Empty()

calc.x2 = lambda x : x * 2
calc.x3 = lambda x : x * 3

print(calc.x2(8))
print(calc.x3(5))
