class ControleCaixa():
	def __init__(self, responsavel):
		self.qtdDinheiro = 0
		self.responsavel = responsavel
		self.log = ""
	
	def colocarDin(self, qtd):
		