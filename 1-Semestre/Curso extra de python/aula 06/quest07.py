pares = []
cont = 0
for i in range(15):
	pares.append(int(input("Digite um valor: ")))

for i in range(15):
	if(pares[i] % 2 == 0):
		cont += 1



print("\nPares: ", pares)
print("\nQuantidade: ", cont)