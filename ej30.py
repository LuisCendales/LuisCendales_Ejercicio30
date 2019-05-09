import os
import numpy as np
import matplotlib.pyplot as plt


a = os.system("g++ ej30.cpp -o ej30.x")
a = os.system("./ej30.x > datos.dat")

f= np.loadtxt("datos.dat")

plt.figure()
plt.plot(data[:,0], data[:,1])
plt.savefig("plot.png")