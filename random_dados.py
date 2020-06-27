import random

n = 1

while( n > 0):
    n = int(input("Digite o numero de lançamentos: "))

    lista = [0]*6

    for i in range (n):
        res = random.randint(1,6)

        if ( res == 1):
            lista[0] += 1

        if ( res == 2):
            lista[1] += 1

        if ( res == 3):
            lista[2] += 1

        if ( res == 4):
            lista[3] += 1

        if ( res == 5):
            lista[4] += 1

        if ( res == 6):
            lista[5] += 1

    p1 = (lista[0] / n) * 100
    p2 = (lista[1] / n) * 100
    p3 = (lista[2] / n) * 100
    p4 = (lista[3] / n) * 100
    p5 = (lista[4] / n) * 100
    p6 = (lista[5] / n) * 100

    print("\n A porcentagem de vezes que o número 1 aparece é de %2.f \n" %p1)
    print(" A porcentagem de vezes que o número 2 aparece é de %2.f \n" %p2)
    print(" A porcentagem de vezes que o número 3 aparece é de %2.f \n" %p3)
    print(" A porcentagem de vezes que o número 4 aparece é de %2.f \n" %p4)
    print(" A porcentagem de vezes que o número 5 aparece é de %2.f \n" %p5)
    print(" A porcentagem de vezes que o número 6 aparece é de %2.f \n" %p6)


