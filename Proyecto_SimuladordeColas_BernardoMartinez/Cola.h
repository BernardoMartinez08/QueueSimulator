#pragma once
#ifndef  COLA_H
#define COLA_H
#include <iostream>
#include <vector>
#include "NodoCola.h"

using namespace std;

class Cola {
public:
	Cola();

	bool isEmpty();
	void push_back(float);
	void pop_front();
	int size();
	NodoCola* front();
	NodoCola* back();

	int getNumeroServidor();

	void movimientoClientes();

	void print();
	void clear();
	vector<Cola*> getColas();

	float promedioTiempoCola();
	float promedioTiempoCaja();
	int totalClientes();

	int getAuxTiempoAtencion();
	void setAuxTiempoAtencion(int);
	void putOnCeroTiempoAtencion();

	void actualizarImagenes(int);

	bool abierta;
private:
	//Primer elemento de la lista
	NodoCola* primero;
	NodoCola* ultimo;

	int numeroCola;
	int numeroServidor;

	float auxTiempoAtencion;

};
#endif // ! COLA_H