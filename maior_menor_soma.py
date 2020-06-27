n = int(input("Digite um número: "))
soma = 0
maior = n
menor = n
while( n != -1):
    soma = soma + n
    
    n = int(input("Digite um número: "))
    
        
    
    if ( n > maior):
        maior = n
        
    if( n < menor and n != -1):
        menor = n
        
print("\n Maior número:%d" %maior)
print("\n Menor número:%d"%menor)
print("\n Soma dos números é:%d "%soma)
