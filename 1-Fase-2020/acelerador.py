#For more informations about this problem: https://olimpiada.ic.unicamp.br/pratique/p2/2020/f1/acelerador/

Dof = int(input())

if 6 <= Dof <= 800008:
    print((Dof - 5)%8)
