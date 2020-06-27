m = []

#split cria uma lista do tamanho de valores que x receber

x = input("Digite 5 números separados por espaço: ").split(" ")

for i in range (4, -1, -1):
    
    print(int(x[i]),end=" ")
    
print()
