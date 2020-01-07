'''
fila
pilha
fila de prioridade
slice

x = [1,2,4,8,7]
del x[0] #remove a posição 0
x.append(6) #adiciona no final
x.insert(2, 10) #adiciona na posição 2 o elemento 10
x.pop() #remove o ultimo elemento
x = x[1:] #pegando a lista do indice 1 para frente
'''
x = [1,2,4,8,7]
print(x)
del x[0]
print(x)
x.append(6)
print(x)
x.insert(2, 10)
print(x)
x.pop()
print(x)
x = x[1:]
print(x)