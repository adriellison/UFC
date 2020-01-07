class ControleAcesso():
	def __init__(self, admin, senha):
		self.admin = admin
		self.senha = senha
		self.acessos = dict()
	
	def logar(self, login, senha):
		if(login in self.acessos.keys()):
			if(self.acessos[login] == senha):
				return True
		return False
	
	def addL(self, admin, senha, novoAcesso, senhaNova):
		if(admin == self.admin and senha == self.senha):
			if