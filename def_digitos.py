def digito(n):
    cont = 0
    while(n >= 1):
        cont += 1
        n = n/10
        
    return cont

x = int(input("Digite um numero: "))
print("\nO número possui: %d digitos"%digito(x))
