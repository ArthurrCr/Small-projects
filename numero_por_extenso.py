n = int(input("Digite um numero de 1 a 99: "))

unidades = ["zero", "um", "dois", "três", "quatro",
            "cinco", "seis", "sete", "oito", "nove"]

de = ["dez", "onze", "doze", "treze", "quatorze", "quinze",
         "dezesseis", "dezessete", "dezoito", "dezenove"]

dezenas = ["dez", "vinte", "trinta", "quarenta", "cinquenta",
        "sessenta", "setenta", "oitenta", "noventa"]

for i in range(n + 1):
    if(n <= 9):
        f = unidades[i]
        
    for j in range(n%10 + 1):
        if(n >= 10 and n <= 19):
            f = de[j]

        for k in range(n//10):

            if( n == 10 or n == 20 or n == 30 or n == 40 or n == 50 or n == 60 or n == 70 or n == 80 or n == 90):

                f = dezenas[k]

            

            elif ( n >= 20 and n <= 99):

                f = dezenas[k] + " e " + unidades[j]

                


        
print(f)
