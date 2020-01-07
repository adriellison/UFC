class Veiculos():
	def __init__(self, marca, modelo, cor):
		self.marca = marca
		self.modelo = modelo
		self.cor = cor
	
	def som(self):
		print("Veiculo buzinando!")

class Carro(Veiculos):
	def __init__(self, marca, modelo ,cor, ambiente):
		super().__init__(nome, cor)
		self.ambiente = ambiente
	def som(self):
		print("Fon! Fon!\n")

class Barco(Veiculos):
	def __init__(self, nome, cor):
		super().__init__(nome, cor)
	def som(self):
		print("Bibi! Bibi!\n")

carro1 = Veiculos("Gol", "Vermelho")

carro1.som()
print(carro1.marca, carro1.cor)