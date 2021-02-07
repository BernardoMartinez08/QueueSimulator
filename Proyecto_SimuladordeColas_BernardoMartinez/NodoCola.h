#pragma once
#ifndef NODO_COLA_H
#define NODO_COLA_H
#include <iostream>
#include <string>
#include <chrono>
using namespace std;

class NodoCola {
public:
	NodoCola(int, int, NodoCola*, NodoCola*);

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

	void movimiento(float);

	int getNumeroCola();

	void setEstado(string);
	string getEstado();

	int getX();
	int getY();

	bool first;

private:
	NodoCola* siguiente;
	NodoCola* anterior;
	float maxTiempoEnCaja;
	int numeroCola;

	float tiempoEnCola;
	float tiempoDeAtencion;
	int posiciones[1][2];
	string estado;

	std::chrono::steady_clock::time_point start;
	std::chrono::steady_clock::time_point end;
};

#endif // !NODO_COLA_H