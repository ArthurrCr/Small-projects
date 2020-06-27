valor = float(input("Digite o valor do produto: "))
pag = str(input("Forma de pagamento, dinheiro ou cheque: "))
desc = 0
if ( valor >= 100 and pag == "dinheiro"):
    desc = (valor * 10) /100
    valor = valor - desc
    print("Valor a ser pago: %2.f" %valor)
else:
    print("Valor a ser pago: %2.f" %valor)
