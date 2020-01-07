class Produto():
	def __init__(self, nome, valor, val, fabr):
		self.nome = nome
		self.valor = valor
		self.val = val
		self.fabr = fabr
	
	def __str__(self):
		return self.nome