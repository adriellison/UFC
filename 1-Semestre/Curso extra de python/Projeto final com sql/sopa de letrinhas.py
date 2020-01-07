import mysql.connector
import os
import random
import time
from colorconsole import terminal

screen = terminal.get_terminal(conEmu=False)

def logo():
	cls()
	carregar()
	screen.cprint(6, 0,'''

				╭━━━┳━━━┳━━━┳━━━╮
				┃╭━╮┃╭━╮┃╭━╮┃╭━╮┃
				┃╰━━┫┃ ┃┃╰━╯┃┃ ┃┃
				╰━━╮┃┃ ┃┃╭━━┫╰━╯┃
				┃╰━╯┃╰━╯┃┃  ┃╭━╮┃	
				╰━━━┻━━━┻╯  ╰╯ ╰╯	▄   ▄
					╭━━━┳━━━╮	█▀█▀█
					╰╮╭╮┃╭━━╯	█▄█▄█
					 ┃┃┃┃╰━━╮	 ███  ▄▄
					 ┃┃┃┃╭━━╯	 ████▐█ █
					╭╯╰╯┃╰━━╮	 ████   █
					╰━━━┻━━━╯	 ▀▀▀▀▀▀▀
			╭╮  ╭━━━┳━━━━┳━━━┳━━┳━╮ ╭┳╮ ╭┳━━━┳━━━╮
			┃┃  ┃╭━━┫╭╮╭╮┃╭━╮┣┫┣┫┃╰╮┃┃┃ ┃┃╭━╮┃╭━╮┃
			┃┃  ┃╰━━╋╯┃┃╰┫╰━╯┃┃┃┃╭╮╰╯┃╰━╯┃┃ ┃┃╰━━╮
			┃┃ ╭┫╭━━╯ ┃┃ ┃╭╮╭╯┃┃┃┃╰╮┃┃╭━╮┃╰━╯┣━━╮┃
			┃╰━╯┃╰━━╮ ┃┃ ┃┃┃╰┳┫┣┫┃ ┃┃┃┃ ┃┃╭━╮┃╰━╯┃
			╰━━━┻━━━╯ ╰╯ ╰╯╰━┻━━┻╯ ╰━┻╯ ╰┻╯ ╰┻━━━╯
	''')
	screen.reset_colors()
	espaco()
	input('\t\t\t\tPressione para continuar')
	cls()
	inicio()
def jogar():
	not_in()
	pontos = 0
	erros = 0
	em_uso = [0]
	for i in range(10):
		os.system("cls")
		cnx = getConexao()
		cursor = cnx.cursor()
		aleatorio = 'select * from palavras where id not in ({}) order by rand() limit 1'.format(','.join(['%s'] * len(em_uso)))
		cursor.execute(aleatorio, em_uso)
		linha = cursor.fetchone()
		cursor.close()
		cnx.close()
		aumentar = linha[1].upper()
		usadas = []
		usadas.extend(aumentar)
		random.shuffle(usadas)
		espaco()
		for i in usadas:
			print("\t",i.strip(), end=" ")
		espaco()
		resposta = input("\tQual a palavra? ")
		if resposta == linha[1]:
			pontos += 1
		elif resposta != linha[1]:
			erros += 1
	#contagem de pontos
	if pontos == 1:
		espaco()
		print(f"Sua pontuação: {pontos} ponto")
	elif pontos != 1:
		print(f"Sua pontuação: {pontos} pontos")
	if erros == 1:
		print(f"Você errou: {erros} palavra")
	elif erros != 1:
		print(f"Você errou: {erros} palavras")
	espaco()
	press()
	cls()
	escolha()

def escolha():
	print('''\n
	1 = Jogar novamente
	2 = Menu de inicio
''')
	opcao = int(input('\t>:  '))
	if opcao == 1:
		jogar()
	elif opcao == 2:
		inicio()
	else:
		invalido()
		escolha()

def nivel():
	not_in()

def opcoes():
	cls()
	while True:
		print('''\n
	1 = Testar conexão
	2 = Adicionar
	3 = Listar
	4 = Editar
	5 = Deletar
	0 = Voltar
	''')
		opcao = int(input('\t>:  '))
		if opcao == 1:
			teste_cnx()
		elif opcao == 2:
			adicionar()
		elif opcao == 3:
			listar()
		elif opcao == 4:
			editar()
		elif opcao == 5:
			deletar()
		elif opcao == 0:
			cls()
			break
		else:
			invalido()
		
def ajuda():
	not_in()

def teste_cnx():
	cls()
	try:
		cnx = getConexao()
		print('\n\tConexão ativa!\n')
	except:
		print('\n\tConexão mal sucedida\n')

def adicionar():
	cls()
	while True:
		print('''\n
		O que deseja Adicionar?
	1 - Palavra
	2 - Categoria
	0 -  Voltar''')
		opcao = int(input('\t>:  '))
		if opcao == 1:
			adicionar_palavra()
		elif opcao == 2:
			adicionar_categoria()
		elif opcao == 0:
			cls()
			break
		elif opcao == '':
			invalido()
		else:
			invalido()

def adicionar_palavra():
	cls()
	print('\tInsira >>> Palavra - id do categoria')
	cnx = getConexao()
	cursor = cnx.cursor()
	while True:
		listar_palavras()
		nome = input('\t\tNova palavra:\n\t>:')
		cls()
		listar_categorias()
		categoria = int(input('\tId do categoria:\n\t>:'))
		cls()
		if nome == '':
			print('\n\tInsira um nome válido!\n')
		if categoria == '':
			print('\n\tInsira um categoria válido!\n')
		else:
			break
	add_palavra = ('insert into palavras(nome, categorias_id) values(%s, %s)')
	cursor.execute(add_palavra,[nome, categoria])
	cnx.commit()
	cursor.close()
	cnx.close()
	cls()

def adicionar_categoria():
	cls()
	while True:
		listar_categorias()
		nome = input('\t\tNome do novo categoria?\n\t>: ')
		if nome == '':
			print('\n\tInsira um nome válido!\n')
		else:
			break
	add_categoria = ('insert into categorias(nome) values(%s)')
	cnx = getConexao()
	cursor = cnx.cursor()
	cursor.execute(add_categoria,[nome])
	cnx.commit()
	cursor.close()
	cnx.close()
	cls()

def listar():
	cls()
	while True:
		print('''\n
		O que deseja listar?
	1 - Palavras
	2 - Categorias
	0 -  Voltar''')
		opcao = int(input('\t>:  '))
		if opcao == 1:
			listar_palavras()
		elif opcao == 2:
			listar_categorias()
		elif opcao == 0:
			cls()
			break
		elif opcao == '':
			invalido()
		else:
			invalido()

def listar_palavras():
	cls()
	cnx = getConexao()
	cursor = cnx.cursor()
	query = ("select p.id, p.nome, c.nome from palavras p join categorias c on p.categorias_id = c.id")
	cursor.execute(query)
	cls()
	for (id, nome, categoria) in cursor:
		print('\t{} - {} {}'.format(id, nome, categoria))
	cursor.close()
	cnx.close()

def listar_categorias():
	cls()
	cnx = getConexao()
	cursor = cnx.cursor()
	listar_categorias = ("SELECT id, nome FROM categorias")
	cursor.execute(listar_categorias)
	for (id, nome) in cursor:
		print('\t{} - {}'.format(id, nome))
	cursor.close()
	cnx.close()

def editar():
	cls()
	while True:
		print('''\n
		O que deseja editar?
	1 - Palavras
	2 - Categorias
	0 -  Voltar''')
		opcao = int(input('\t>:  '))
		if opcao == 1:
			editar_palavra()
		elif opcao == 2:
			editar_categoria()
		elif opcao == 0:
			break
		elif opcao == '':
			invalido()
		else:
			invalido()

def editar_palavra():
	cls()
	cnx = getConexao()
	cursor = cnx.cursor()
	listar_palavras()
	selecionar = input('\t\tId da palavra a ser editada?\n\t>: ')
	if selecionar == '':
		print('Nenhuma palavra editada!')
	else:
		query1 = (f"SELECT * FROM palavras WHERE id = {selecionar}")
		cursor.execute(query1)

		linha = cursor.fetchone()
		nome = input('\tNovo nome [{}]: '.format(linha[1]))
		categoria = input('\tNovo categoria[{}]: '.format(linha[2]))
		if nome == '':
			nome = linha[1]
		if categoria == '': 	
			categoria = linha[2]
		atualizar = 'UPDATE palavras SET nome = %s, categorias_id = %s WHERE id = %s'
		cursor.execute(atualizar,(nome, categoria, selecionar))
		# cursor.execute(atualizar)
		cnx.commit()
	cursor.close()
	cnx.close()
	cls()

def editar_categoria():
	cls()
	cnx = getConexao()
	cursor = cnx.cursor()
	listar_categorias()
	selecionar = input('\t\tId do categoria a ser editado?\n\t>: ')
	if selecionar == '':
		print('Nenhuma categoria editada!')
	else:
		query1 = (f"SELECT * FROM categorias WHERE id = {selecionar}")
		cursor.execute(query1)
		linha = cursor.fetchone()
		nome = input('\tNovo Nome [{}]: '.format(linha[1]))
		if nome == '':	
			nome = linha[1]
		atualizar = 'UPDATE categorias SET nome = %s WHERE id = %s'
		cursor.execute(atualizar,(nome, selecionar))
		# cursor.execute(atualizar)
		cnx.commit()
	cursor.close()
	cnx.close()
	cls()

def deletar():
	cls()
	while True:
		print('''
		O que deseja deletar?
	1 - Palavras
	2 - Categorias
	0 -  Voltar''')
		opcao = int(input('\t>:  '))
		if opcao == 1:
			deletar_palavra()
		elif opcao == 2:
			deletar_categoria()
		elif opcao == 0:
			cls()
			break
		elif opcao == '':
			invalido()
		else:
			invalido()

def deletar_palavra():
	cls()
	listar_palavras()
	cnx = getConexao()
	cursor = cnx.cursor()
	id = input('\t\tId da palavra a ser deletada?\n\t>: ')
	deletar = 'delete from palavras where id = %s'
	if id == '':
		print('\n\tNenhuma palavra deletada!\n')
	else:
		print('\n\tPalavra Deletada com sucesso!\n')
	cursor.execute(deletar,(id,))#cursor.execute(deletar[id])
	cnx.commit()
	cursor.close()
	cnx.close()

def deletar_categoria():
	cls()
	listar_categorias()
	cnx = getConexao()
	cursor = cnx.cursor()
	id = input('\t\tId do categoria a ser deletado?\n\t>: ')
	deletar = 'delete from categorias where id = %s'
	if id == '':
		print('\n\tNenhum categoria deletado!\n')
	else:
		print('\n\tcategoria deletado com sucesso!\n')
	cursor.execute(deletar,(id,))#cursor.execute(deletar[id])
	cnx.commit()
	cursor.close()
	cnx.close()

def getConexao():
	cnx = mysql.connector.connect(host='localhost', user='root', password='admin', database='bd_game')
	return cnx

def cls():
	os.system('cls')

def press():
	input('\n\t\tPressione qualquer tecla para continuar!\n')

def invalido():
	print('\n\tOpção inválida!\n')

def carregar():
	lista = [
	'▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒0%',
	'█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒5%',
	'██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒10%',
	'███▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒15%',
	'████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒20%',
	'█████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒25%',
	'██████▒▒▒▒▒▒▒▒▒▒▒▒▒▒30%',
	'███████▒▒▒▒▒▒▒▒▒▒▒▒▒35%',
	'████████▒▒▒▒▒▒▒▒▒▒▒▒40%',
	'█████████▒▒▒▒▒▒▒▒▒▒▒45%',
	'██████████▒▒▒▒▒▒▒▒▒▒50%',
	'███████████▒▒▒▒▒▒▒▒▒55%',
	'████████████▒▒▒▒▒▒▒▒60%',
	'█████████████▒▒▒▒▒▒▒65%',
	'██████████████▒▒▒▒▒▒70%',
	'███████████████▒▒▒▒▒75%',
	'████████████████▒▒▒▒80%',
	'█████████████████▒▒▒85%',
	'██████████████████▒▒90%',
	'███████████████████▒95%',
	'████████████████████100%']
	for i in lista:
		time.sleep(0.05),cls(),print('\n\n\n\n\n\n\n\t\t\t\t',i)
	cls()

def not_in():
	print('\n\tAinda não implementado\n')

def espaco():
	print("\n" * 5)

def inicio():
	cls()
	while True:
		print('''\n
	1 = Jogar
	2 = Nível
	3 = Opções
	4 = Ajuda
	0 = Sair
	''')
		opcao = int(input('\t>:  '))
		if opcao == 1:
			jogar()
		elif opcao == 2:
			nivel()
		elif opcao == 3:
			opcoes()
		elif opcao == 4:
			ajuda()
		elif opcao == 0:
			print('Até mais')
			exit()
		else:
			invalido()
			opcao 	= False
logo()
'''
while True:
	try:
		inicio()
	except ValueError:
		invalido()
'''
#nome = \'{nome}\'
#	time.sleep(3)