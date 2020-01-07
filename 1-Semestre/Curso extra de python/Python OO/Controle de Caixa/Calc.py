class Calculadora():
	def __init__(self, marca, modelo, tipo, bateria):
		self.marca = marca
		self.modelo = modelo
		self.tipo = tipo
		self.bateria = bateria
		#tudo atributo
		
	def somar(self, a, b):
		return a + b
	def subtrair(self, a, b):
		return a - b
	def multiplicar(self, a, b):
		return a * b
	def dividir(self, a, b):
		return a / b
	def potencia(self, a, b):
		return a ** b
	def raizQuadrada(self, a):
		return a ** 0.5
	def resto(self, a, b):
		return a % b