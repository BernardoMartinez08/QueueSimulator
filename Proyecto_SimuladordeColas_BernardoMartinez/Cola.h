#pragma once
#ifndef  COLA_H
#define COLA_H

#include "NodoCola.h"
class Cola {
public:
	Cola();

	bool isEmpty();
	void push();
	void pop();
	int size();
	NodoCola* front();
	NodoCola* back();
private:
	//Primer elemento de la lista
	NodoCola* _front;
	NodoCola* _back;
};


#endif // ! COLA_H