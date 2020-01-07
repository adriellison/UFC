import Calc

c = Calc.Calculadora("Casio", "F-84", "Normal", "Duracel")
#print(c.bateria)
#print(c.somar(5, 2))
q = True

print("Bem vindo a Calculadora"+c.marca + c.modelo)
while q:
	print("Escolha as opções abaixo: ")
	print("1 - Somar")
	print("2 - Subtrair")
	print("3 - Multiplicar")
	print("4 - Dividir")
	print("5 - Sair")
	op = input()
	if(op == "1"):
		print("Digite os dois números para somar ")
		a = int(input())
		b = int(input())
		print("A soma é " +str(c.somar(a, b)))
	if(op == "5"):
		break