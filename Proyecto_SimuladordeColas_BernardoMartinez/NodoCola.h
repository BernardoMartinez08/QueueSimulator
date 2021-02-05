#pragma once
#ifndef NODO_COLA_H
#define NODO_COLA_H
#include <iostream>
#include <string>
#include <chrono>
using namespace std;

class NodoCola {
public:
	NodoCola(int, int, NodoCola*);
	NodoCola();

	void setTiempoCola(float);
	void setTiempoCaja(float);
	void setMaxTiempoEnCaja(float);

	void setSiguiente(NodoCola*);
	void setAnterior(NodoCola*);
	NodoCola* getSiguiente();
	NodoCola* getAnterior();

	float getTiempoCola();
	float getTiempoCaja();
	float getMaxTiempoEnCaja();

	void movimiento();
	int getNumeroCola();

	void setPosiciones(int,int);

	string getEstado();
	void setEstado(string);


	int getX();
	int getY();

private:
	NodoCola* siguiente;
	NodoCola* anterior;

	float tiempoEnCola;
	float tiempoDeAtencion;
	float maxTiempoEnCaja;

	int posiciones[1][2];
	int numeroCola;
	string estado;

	std::chrono::system_clock::time_point start;
	std::chrono::system_clock::time_point end;
};

#endif // !NODO_COLA_H