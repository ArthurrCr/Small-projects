n = int(input("Digite um número positivo: "))
cont = 0

if(n == 0):
    cont = 1
else:
    while( n != 0):
        
        if ( n < 0):
            n = int(input("Este número é inválido tente novamente:"))
            
        cont = cont + 1
        n = n // 10
        
print("Número de algarísmos é %d"%cont)
