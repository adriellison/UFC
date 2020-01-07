class Animal():
	def __init__(self, nome, cor):
		self.nome = nome
		self.cor = cor	
	def som(self):
		print("Animal fazendo som")

class Gato(Animal):
	def __init__(self, nome, cor, raca, tamanho, garras):
		super().__init__(nome, cor)
		self.raca = raca
		self.tamanho = tamanho
	def som(self):
		print("meow!\n")

class Cachorro(Animal):
	def __init__(self, nome, cor, raca, tamanho, garras):
		super().__init__(nome, cor)
		self.raca = raca
		self.tamanho = tamanho
	def som(self):
		print("au! au! au! au!\n")

class K_nn():
	def __init__(self, vizinhos)