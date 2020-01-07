import random as rd
x = [rd.random()*10 for i in range(30)]#gera uma nota aleatoria de 0 a 10 para cada aluno no range de 30

soma = 0
for i in range(30):
	soma += x[i]

media = soma / 30
qtdAlunos = 0
for i in range(30):
	qtdAlunos += 1 if x[i] < media else 0
print(qtdAlunos)