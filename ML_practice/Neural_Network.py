import numpy as np
import random

class Neural_Network(object):
	def __init__(self):
		
		# Define HyperParameters
		self.inputLayerSize = 2
		self.outputLayerSize = 1
		self.hiddenLayerSize = 3

		# Weights (parameters)
		self.W1 = np.random.randn(self.inputLayerSize, self.hiddenLayerSize)
		self.W2 = np.random.randn(self.hiddenLayerSize,self.outputLayerSize)



	def forward(self, X):
		# forward propagation : propagate inputs through network
		# 1.)  Z2 = X * W
		# 2.)  a2 = sigmoid(z2)
		# 3.)  z3 = a2 * W3
		# 4.)  yhat = sigmoid(z3)

		self.z2 = np.dot(X, self.W1)
		self.a2 = self.sigmoid(self.z2)
		self.z3 = np.dot(self.a2,self.W2)
		yHat = self.sigmoid(self.z3)

		return yHat

	def sigmoid(self,z):
		# apply sigmoid activation function
		return 1.0/(1.0 + np.exp(-z))

if __name__ == "__main__":
	
	X = np.array([[3,5],[5,1],[10,2]])
	NN = Neural_Network()
	
	yHat = NN.forward(X)
	print(yHat)

