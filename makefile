
plot.png: datos.dat plot.py
	python plot.py

%.dat : a.out
	./a.out 

a.out: DanielaBarrios_Ejercicio30.cpp
	g++ DanielaBarrios_Ejercicio30.cpp

clean:
	rm -rf a.out datos.dat plot.png *~
