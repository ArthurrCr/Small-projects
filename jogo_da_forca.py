import random

palavras = [ 'arroz', 'feijao', 'farofa', 'salada', 'carne', 'suco']

escolha = random.randint(0,5)

es = palavras[escolha]

tamanho = len(es)

f = ["_"]*tamanho

tentativas = 0

ld = []

while (tentativas != 6 and "_" in f):
        cont = 0
        n = str.lower(input("\nDigite uma letra: "))
        if (n in ld):
                print("\nletra já foi digitada")
                continue
        for j in range(len(es)):
        
        
                if (n == es[j]):
                        f[j] = n
            
                        ld.append(n)

                elif (n != es[j]):
                        cont += 1
        for i in range(tamanho):
                print(f[i], end=" ")
        print()

        if(tentativas == 5 ):
                print("\nVocê esgotou o número de tentativas")
                break
        
        if (cont == tamanho):
                tentativas += 1
                print("\n Você errou pela %d vez. Tente novamente!" %tentativas)
                
if(tentativas != 5):
        print("\nParabéns você conseguiu!!")
        

        
            
