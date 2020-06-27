alt = []
sexo = []
contM = 0
contF = 0
somaM = 0
somaF = 0

for i in range (0,3):

    altura = float(input("Digite sua altura: "))

    se = input("Digite seu sexo: ")

    alt.append(altura)

    sexo.append(se)

    if ( se[0] == "M" or se[0] == "m"):
        contM += 1
        somaM += altura

    elif ( se[0] == "F" or se[0] == "f"):
        contF += 1
        somaF += altura

print("\nMedia altura M: ", somaM/contM)
print("\nMedia altura F: ", somaF/contF)

print("\nTotal de individuos M: ", contM)
print("\nTotal de individuos F: ", contF)

indmax = alt.index(max(alt))
indmin = alt.index(min(alt))

print("\nAltura máxima = {:.2f}, sexo: {}".format(max(alt),sexo[indmax]))
print("\nAltura mínima = %.2f sexo: %s " %(min(alt), sexo[indmin]))
