cpf = input("Digite o número do cpf no formato xxx.xxx.xxx-xx :  ")

m = [10,9,8,7,6,5,4,3,2]

m1 = [11,10,9,8,7,6,5,4,3]

digito = 0

cpf = cpf.replace(".","")

cpf = cpf.replace("-","")

cpf1 = int(cpf)

digitoaux2 = 0

digitoaux = 0

for i in range(0,9):
    
            
    digito = int(cpf[i]) * m[i]
    digitoaux = digito + digitoaux
resto = digitoaux % 11
    
if((11 - resto) > 9):
    print("\nSeu penultimo digito é 0")
    restofim1 = 0
else:
    print("\nSeu penultimo digito é :",11 - resto)
    restofim1 = 11 - resto

for j in range(0,9):

    digito2 = int(cpf[j]) * m1[j]

    digitoaux2 = digito2 + digitoaux2
    
if( restofim1 == 0): 
    digitoaux2 = digitoaux2 

else:
    digitoaux2 = digitoaux2 + (11 - resto) * 2
resto2 = digitoaux2 %11 

if((11 - resto2) > 9):
    print("\nSeu último digito é 0")
    restofim2 = 0 
else:
    print("\nSeu último digito é :",11 - resto2)
    restofim2 = 11 - resto2


if(int(cpf[10]) == restofim2 and int(cpf[9]) == restofim1):
    
    print("\nSeu número de cpf é válido")
else:
    print("\nSeu número de cpf é inválido")




    

            
            
    
 

