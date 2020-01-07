def somatorio(n):
	total = 0
	for i in range(n+1):
		total += i
	return total
n = int(input("Insira o valor de N: "))
print(somatorio(n))