m = []

for i in range (0, 3):
    linha = []
    for j in range (0 , 3):
        x = int(input("Valor: "))
        linha.append(x)
        
    m.append(linha)

aux = []

print("\nMatriz: \n")

for i in range (0,3):
    print(m[i], end= "")
    print()
print()


for i in range (0,3):
    aux.append(m[i][1])
    m[i][1] = m [1][i]
m[1] = aux

print("Valor trocado: \n ")
for i in range (0,3):
    print(m[i], end=" ")
    print()



