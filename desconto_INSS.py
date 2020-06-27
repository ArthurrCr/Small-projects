salario = float(input("Digite o valor do salário: "))
desc = 0

if( salario <= 420):
    desc = (salario * 8)/100
    liq = salario - desc
    
if ( salario <= 1350 and salario > 420):
    desc = (salario * 9)/100
    liq = salario - desc
    
if ( salario > 1350):
    desc = (salario * 10)/100
    liq = salario - desc
    
print ( " \n O desconto do INSS é : %2.f" %desc)

print( " \n O valor do salário liquido é de: %2.f" %liq)
