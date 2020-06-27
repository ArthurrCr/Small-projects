def string(n):
    for i in range (len(n)):
        for j in range(0,i +1):
            print(n[j], end= " ")
        print()
    return n

x = input("Digite fulano: ")
string(x)
