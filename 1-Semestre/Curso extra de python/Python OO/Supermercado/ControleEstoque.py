class ControleEstoque():
	def __init__(self):
		self.produtos = dict()
		self.log = ""
	
	def adicionarProd(self, prod, qtd):
		if(prod.nome in self.produtos.keys()):
			self.produtos[prod.nome].append((prod, qtd))
		else:
			self.produtos[prod.nome] = []
			self.produtos[prod.nome].append((prod.qtd))
		self.salvarLog("Produto adicionado no estoque ") + prod.nome +
	
	def removerProd(self, prod,qtd):
		qtdLog = qtd
		if(prod.nome in self.produtos.keys()):
			while(qtd != 0 and len(self.produtos[prod.nome]);;;
				x = self.produtos[prod.nome][0][1]
				if(x  > qtd):
					a = self.produtos[prod.nome][0][0]
					qt = self.produtos[prod.nome][0][1]
					self.produtos[prod.nome][0] = (o, qt-q)
					qtd = 0
				elif(qtd > x):
					qtd -= x
					del self.produtos[prod.nome][0]
				else:
					qtd = 0
					del self.produtos[prod.nome][0]
		self.salvarLog("Removendo produto do estoque" + )