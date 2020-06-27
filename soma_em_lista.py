m = []
v = []

for i in range (0, 2):
    linha = []
    for j in range (0,3):
        linha.append(int(input("Valor: ")))

    m.append(linha)

for i in range (0,3):
    soma = 0

    soma += m[0][i] + m[1][i]

    v.append(soma)

print(m[0])
print(m[1])

print("Soma: ")

print(v)
