str0 = input("Digite algo: ")
str1 = input("\nDigite algo 2: ")

cont1 = 0
cont2 = 0
for i in range(len(str0)):
    cont1 += 1

for j in range(len(str1)):
    cont2 += 1

if(str0 == str1):
    print("\nAs strings possuem conteúdo igual")

else:
    print("\nAs strings possuem conteúdo diferente")
    
print("\nA string 1 : %s possui  comprimento de : %d caracteres"%(str0,cont1))
print("\nA string 2 : %s possui  comprimento de : %d caracteres"%(str1,cont2))

    
