plot.png: datos.dat ej30.py
    python ej30.py

%.dat : a.out
    ./a.out 

a.out: ej30.cpp
    g++ ej30.cpp