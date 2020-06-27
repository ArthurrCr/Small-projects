data = input("Informe a data: D/M/A ").split("/")

m = [' ', 'janeiro', 'fevereiro','março','abril','maio','junho','julho',
     'agosto','setembro','outubro','novembro','dezembro']



for i in range(int(data[1])+1 ):

    if ( i == int(data[1])):

        data2 = data[0] + " de " + m[i] + " de " + data[2]
        print("Data por extenso : %s " %data2)
