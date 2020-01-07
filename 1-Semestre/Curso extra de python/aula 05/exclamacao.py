def exclamar(n):
	for i in range(n + 1):
		print("!" * i)
		#print("oi", end = "")  <<essa linha anula a quebra de linha
n = 5
#exclamar(n)
def excla2for(n):
	for i in range(n+1):
		for j in range(i):
			print("!.", end="")
		print()
#excla2for(5)

def exclaKainan(n):
	msg = "!-"
	for i in range(n):
		print(msg)
		msg += "!-"
exclaKainan(n)