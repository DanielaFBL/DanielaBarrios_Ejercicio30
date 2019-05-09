import numpy as np
import matplotlib.pyplot as plt
import imageio

images = []
x=np.arange(0,1, 0.01)

for i in range(200):
    datos=plt.figure()
    plt.plot(x, np.loadtxt("datos.dat")[i])
    plt.savefig("datos"+str(i)+".png")
    plt.close(datos)
for i in range(200):
    images.append(imageio.imread("datos"+str(i)+".png"))
imageio.mimsave("imagen.gif", images)
