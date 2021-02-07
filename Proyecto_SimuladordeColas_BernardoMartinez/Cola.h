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

	void movimientoClientes(float);

	void print();
	vector<Cola*> getColas();

	float promedioTiempoCola();
	float promedioTiempoCaja();
	int totalClientes();

private:
	//Primer elemento de la lista
	NodoCola* primero;
	NodoCola* ultimo;

	int numeroCola;
	int numeroServidor;
};
#endif // ! COLA_H