n = 0
saldo = 0
depositar = 0
sacar = 0
while( n != 4):
    
    n = int(input("\n Qual operação deseja fazer? : \n <1> Depositar \n <2> Sacar \n <3> Consultar \n <4> Sair \n Digite o valor da opção: "))
    
    if( n > 4 or n == 0):
        print("\n Valor de opção incorreto digite novamente")
        n = int(input("\n Qual operação deseja fazer? : \n <1> Depositar \n <2> Sacar \n <3> Consultar \n <4> Sair \n Digite o valor da opção: "))
        
    if ( n == 1):
        depositar = int(input("Qual o valor desejado? "))
        saldo = saldo + depositar
        
    if ( n == 2):
        sacar = int(input("Quanto deseja sacar? "))
        
        if( sacar > saldo ):
            print( "\n O valor para saque é maior que seu saldo, deseja consultá-lo?")
            n = int(input(" \n <1> Sim <2> Não "))
            if( n == 1):
                print("\n Seu saldo é de %d reais" %saldo)
            else:
                continue
                
                
        else:
            saldo = saldo - sacar
            print("\n Seu saque foi efetuado com sucesso!!")
            
    if ( n == 3 ):
        print("\n Seu saldo é de %d reais" %saldo)
        
    if( n == 4):
        print("\n Banco Dinheiro Seguro agradece pela sua preferência, volte sempre :) ")
        
        
