#For more informations about this exercise: https://olimpiada.ic.unicamp.br/pratique/p2/2021/f1/idade/
#Just testing

C1 = int(input())
C2  = int(input())
C3  = int(input())

if all(5 <= x <= 100 for x in [C1, C2, C3]):
    if C1 == C3 == C2:
        print(C2)
    else:
        Camila = sorted([C1, C2, C3])[1]
        print(Camila)