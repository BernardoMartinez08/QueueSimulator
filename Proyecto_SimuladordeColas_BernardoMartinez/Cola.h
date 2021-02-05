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

	vector<Cola*> Colas;
private:
	//Primer elemento de la lista
	NodoCola* _front;
	NodoCola* _back;

	int numeroServidor;
};


#endif // ! COLA_H