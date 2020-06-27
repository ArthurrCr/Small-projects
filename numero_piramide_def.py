def f(x):
    for i in range( x + 1):
        for j in range(1, i + 1):
            print(i, end = " ")
        print()
        
    return x

n = int(input("Digite um número: "))
f(n)
