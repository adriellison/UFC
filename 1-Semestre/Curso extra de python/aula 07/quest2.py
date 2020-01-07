'''
x = [1, 3, 6, 2]
ordem = []
#for i in range
tamanho = len(x)
for i in range(tamanho):
	#print("ola")
	menor = x[i]
	if(menor < x[i]):
		
#print()

x = 10
y = 8
print(x, y)
#trocar o valores entre as variaveis
aux = x
x = y
y = aux
print(x, y)
'''
def ordenar(x):
	for i in range(len(x)):
		menor = x[i]
		ind = i
		for j in range(i, len(x)):
			if(x[j] < menor):
				menor = x[j]
				ind = j
		x[ind], x[i] = x[i], x[ind]
	return x

array = [1, 3, 6, 2, 4, 5, 3]
print(ordenar(array))