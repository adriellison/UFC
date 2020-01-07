class ControleDeCaixa():
	def __init)__(self):
	self.qtdDinheiro = 0
	self.responsavel = ""
	self.lol = ""
	
	def colocarDin(self, qtd):
		if(qtd > 0):
			self.qtdDinheiro += qtd
			self.salvarLog("Adicionou no caixa" + str(qtd) + "reais")

	def colocarDin(self, qtd):
		if(qtd < 0):
			self.qtdDinheiro += qtd
			self.salvarLog("Removi no caixa" + str(qtd) + "reais")

	def salvarLog(self, s):
		self.log += s + "\n"