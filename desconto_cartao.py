valor = float(input("Digite o valor do produto: "))
pag = str(input("Forma de pagamento: dinheiro, cheque ou cartão?: "))
desc = 0

if ( pag == "cartão"):
    cart = int(input(" \n Crédito <0>  Débito<1>"))
    
    if( cart == 0):
        
        parcela = int(input(" \n Você pode parcelar em até 3x, digite a quantidade de parcelas: "))
        
        if(parcela == 3):
            
            valor = valor / parcela
            
            print(" \n O valor é de três parcelas de %2.f" %valor)
            
        if(parcela == 2):
            valor = valor / parcela
            print(" \n O valor é de duas parcelas de %2.f" %valor)


        if(parcela == 1):
            valor = valor / parcela
            print(" \n O valor de cada parcela é %2.f" %valor)
        
        if(parcela > 3):
            print(" \n Número de parcelas inválido")
                
    else:
        print ( " \n Valor a ser pago: %2.f" %valor)
        
elif( pag == "dinheiro"):
            
    if ( valor >= 100 and pag == "dinheiro"):
        desc = (valor * 10) /100
        valor = valor - desc
    
        print("Valor a ser pago: %2.f" %valor)
    else:
        print ( " \n Valor a ser pago: %2.f" %valor)
        
elif( pag == "cheque"):
    print ( " \n Valor a ser pago: %2.f" %valor)

