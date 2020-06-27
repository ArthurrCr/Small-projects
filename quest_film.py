idade = int(input("Digite sua idade: "))
nota = input("Dê a sua nota entre : ruim, regular, bom ou excelente: ")
cont_idade = 0
media = 0
quant = 0
ruim = 0
bom = 0
cont_excelente = 0
excelente = 0
mais_velha = idade
stop = 0

while ( stop != 2):

    stop = int(input("Deseja continuar ? \n <1> sim \n <2> não \n Digite sua resposta: "))
    
    if ( idade > mais_velha):
        mais_velha = idade
    
    if ( nota == 'ruim' or nota == 'regular'):
        ruim = ruim + 1
        
    if( nota == 'bom'):
        bom = bom +1
        cont_idade = cont_idade + idade
        media = cont_idade / bom
        
    if ( idade >= 30 and nota == 'excelente'):
        cont_excelente = cont_excelente + 1

    if(stop == 1):
        idade = int(input("\n Digite sua idade: "))
        nota = input("\n Dê a sua nota entre : ruim, regular, bom ou excelente: ")
        
    
          
print("\n Média da idade das pessoas que responderam bom: %d anos "%media)
print("\n Quantidade de respostas ruim/regular: %d"%ruim)
print("\n Pessoas acima de 30 anos que deram excelente como resposta: %d"%cont_excelente)
print("\n Pessoa mais velha que respondeu ao questionário: %d anos"%mais_velha)

  
