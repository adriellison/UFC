#soma de gauss
def somatorio(n):
	if n <= 1:
		return 1
	return n + somatorio(n-1)

#fatorial
def fatorial(n):
	if n <= 1:
		return 1
	return n * fatorial(n-1)

def potencia(x, y):
	if y == 0:
		return 1
	return x * potencia(x, y - 1)

n = int(input("Insira o valor de N: "))

print(somatorio(n))
print(fatorial(n))

'''
soma de gauss
de baixo para cima
1			
2 + rec(1)	2 = 1 = 3
3+ rec(2)	3 + 3 = 6
rec(3)		6
'''