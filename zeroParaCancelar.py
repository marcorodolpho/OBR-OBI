#For more informations about this exercise: https://olimpiada.ic.unicamp.br/pratique/p2/2021/f1/zero/

#Notes for this problem: - New command discovered (range): range(0, 11, 2) -> 0, 2, 4, 6, 8, 10

numbers = []

quanty = int(input())

for i in range(quanty):
    var = int(input())
    
    if var == 0:
        numbers.pop()
    else:
        numbers.append(var)

print(sum(numbers))