def potencia(x, y):
	if y == 0:
		return 1
	return x * potencia(x, y - 1)

x = int(input("Insira o valor de x: "))
y = int(input("Insira o valor de y: "))
print(potencia(x, y))