class Animal():
	def __init__(self, nome, cor):
		self.nome = nome
		self.cor = cor
	
	def som(self):
		print("Animal fazendo som")

class Gato(Animal):
	def __init__(self, nome, cor, raca):
		super().__init__(nome, cor)
		self.raca = raca
	def som(self):
		print("meow!\n")

class Cachorro(Animal):
	def __init__(self, nome, cor, raca):
		super().__init__(nome, cor)
		self.raca = raca
	def som(self):
		print("au! au! au! au!\n")

gato1 = Gato("ted", "laranja", "Persa")
gato2 = Gato("bichano", "cinza", "siamês")

cachorro1 = Cachorro("Nasus", "Preto", "Mastiff")

gato1.som()
print(gato2.nome, gato2.cor, gato2.raca)
cachorro1.som()
print(cachorro1.nome, cachorro1.cor, cachorro1.raca)