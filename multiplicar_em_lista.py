n = int(input("Quantidade de valores a serem recebidos: "))
v = []

for i in range (0,n,1):

    num = int(input("Valor: "))

    if ( num % 2 == 0):
        v.append ( num * 2)
    else:
        v.append (num * 3)
        
print(v)
