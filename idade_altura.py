idade = float(input("Digite a sua idade: "))

cont = 0

if ( idade < 0 ):
    print("\n Fim do programa")


else:
    altura = float(input("Digite a sua altura: "))
    
    while( idade > 0 ):
        
        if (idade >= 18 and altura >= 1.7):
            cont = cont + 1
    
        idade = float(input("Digite a sua idade: "))
    
        if( idade < 0):
            break
    
        altura = float(input("Digite a sua altura: "))
    
        
        
print("\n %d pessoas tem idade superior à 18 anos e estatura superior à 1,70 metros"%cont)
