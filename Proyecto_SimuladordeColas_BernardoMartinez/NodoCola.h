#pragma once
#ifndef NODO_COLA_H
#define NODO_COLA_H

class NodoCola {
public:
	NodoCola(int, int, NodoCola*);

	void setTiempoCola(int);
	void setTiempoCaja(int);

	void setSiguiente(NodoCola*);

	int getTiempoCola();
	int getTiempoCaja();
	NodoCola* getSiguiente();
private:
	int tiempoEnCola;
	int tiempoEnCaja;

	NodoCola* siguiente;

};

#endif // !NODO_COLA_H