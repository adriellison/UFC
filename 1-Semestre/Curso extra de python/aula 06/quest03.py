'''
	
'''
x = [[0 for j in range(10)] for i in range(10)]
c = 1
for i in range(10):
	for j in range(10):
		x[i][j] = c
		c += 1
print(x)