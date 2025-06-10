#For more informations about this exercise: https://olimpiada.ic.unicamp.br/pratique/p2/2021/f1/cifra/

consoantes = "bcdfghjklmnpqrstvxz"
vogal_mais_prox ="aaeeeiiiiooooouuuuu"
consante_prox = "cdfghjklmnpqrstvxzz"

palavra = input()

cifrada = ''

for letra in palavra:
    if letra in consoantes:
        cifrada += letra
        pos_letra = consoantes.index(letra)
        cifrada += vogal_mais_prox[pos_letra]
        cifrada += consante_prox[pos_letra]

    else:
        cifrada += letra

print(cifrada)