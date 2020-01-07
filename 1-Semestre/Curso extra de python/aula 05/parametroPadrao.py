def insira(n = 1):
	return n * 2

def parametros(msg = "VALOR DEFAULT"):
	return msg

print(insira())

msg = input("Digite uma frase")

if(msg == ""):
	print(parametros())#se deixar vazio chama o default
else:
	print(parametros(msg))