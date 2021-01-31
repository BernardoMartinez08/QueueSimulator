#include "NodoCola.h"

NodoCola::NodoCola(int _tiempoCola, int _tiempoCaja, NodoCola* _siguiente) : tiempoEnCola(_tiempoCola), tiempoEnCaja(_tiempoCaja), siguiente(_siguiente) {

}

void NodoCola::setTiempoCaja(int _tiempoCaja) {
	this->tiempoEnCaja = _tiempoCaja;
}

void NodoCola::setTiempoCola(int _tiempoCola) {
	this->tiempoEnCola = _tiempoCola;
}

void NodoCola::setSiguiente(NodoCola* _siguiente) {
	this->siguiente = _siguiente;
}

int NodoCola::getTiempoCaja() {
	return this->tiempoEnCaja;
}

int NodoCola::getTiempoCola() {
	return this->tiempoEnCola;
}

NodoCola* NodoCola::getSiguiente() {
	return this->siguiente;
}