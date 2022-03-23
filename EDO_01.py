def edo (x,y):
    return y-x
    
#Metodo de Euler

def euler():
    x_inicial = float (input("insira um valor inicial para 'x': "))
    x_final = float (input("insira um valor final para 'x': "))
    y_inicial = float (input("insira um valor inicial para 'y': "))
    h = float (input("insira o passo 'h': "))
    
    xn = x_inicial
    yn = y_inicial
    while xn < x_final:
        yn1 = yn + h*edo(xn,yn)
        yn = yn1
        xn += h
    print("y(%.4f) = %.4f"%(x_final,yn))
    
#Metodo de Euler melhorado

def euler_melhorado():
    x_inicial = float (input("insira um valor inicial para 'x': "))
    x_final = float (input("insira um valor final para 'x': "))
    y_inicial = float (input("insira um valor inicial para 'y': "))
    h = float (input("insira o passo 'h': "))
    
    xn = x_inicial
    yn = y_inicial
    xn1 = xn + h
    while xn < x_final:
        k1 = edo(xn,yn)
        k2 = edo(xn1,yn+h*k1)
        yn1 = yn + (h/2)*(k1+k2)
        yn = yn1
        xn += h
        xn1 +=h
        
    print("y(%.4f) = %.4f"%(x_final,yn))
    
#Metodo Rk2
def equa_dif(x,y):
    return (x + y - 2)
    
def rk2():
    
    x_inicial = float (input("insira um valor inicial para 'x': "))
    x_final = float (input("insira um valor final para 'x': "))
    y_inicial = float (input("insira um valor inicial para 'y': "))
    h = float (input("insira o passo 'h': "))
    
    xn = x_inicial
    yn = y_inicial
    n = ((x_final - x_inicial) / h)
    i = 1
    while i<= n:
        k1 = h * equa_dif(xn,yn)
        k2 = h * equa_dif(xn + 0.5 * h,yn+ 0.5 *k1)
        yn = yn + (1.0 / 6.0) * (k1 + 2 * k2)
        xn += h
        i +=1
   
    print("y(%.4f) = %.4f"%(x_final,yn))
    
#Metodo Rk4

def equa_dif2(x,y):
    return((x - y)/2)
    
def rk4():
    
    x_inicial = float (input("insira um valor inicial para 'x': "))
    x_final = float (input("insira um valor final para 'x': "))
    y_inicial = float (input("insira um valor inicial para 'y': "))
    h = float (input("insira o passo 'h': "))
    
    xn = x_inicial
    yn = y_inicial
    n = ((x_final - x_inicial) / h)
    i = 1
    while i<= n:
        k1 = h*equa_dif2(xn, yn);
        k2 = h*equa_dif2(xn + 0.5*h, yn + 0.5*k1);
        k3 = h*equa_dif2(xn + 0.5*h, yn + 0.5*k2);
        k4 = h*equa_dif2(xn + h, yn + k3);
        yn = yn + (1.0/6.0)*(k1 + 2*k2 + 2*k3 + k4)
        xn += h
        i +=1
   
    print("y(%.4f) = %.4f"%(x_final,yn))