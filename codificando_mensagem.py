h = [' ','a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
     'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

mensagem = input("Digite sua mensagem com números( 0 - 26), separe-os por espaço: ").split(" ")



for i in range(len(mensagem)):
    mensagem[i] = int(mensagem[i])

    print(h[mensagem[i]], end ="")


