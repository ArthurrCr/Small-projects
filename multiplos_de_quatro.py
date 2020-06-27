n = int(input("Digite o primeiro número: "))
n2 = int(input("Digite o segundo número: "))
cont = 0
if ( n < n2):
    
    for i in range (n + 1 , n2):
    
        if( i % 4 == 0):
            cont = cont + 1
        
elif ( n > n2 ):
    for i in range (n2 - 1 , n):
    
        if( i % 4 == 0):
            cont = cont + 1
    
print("\n %d Múltiplos"%cont)
