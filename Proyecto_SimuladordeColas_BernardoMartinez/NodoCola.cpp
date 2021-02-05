#include "NodoCola.h"

NodoCola::NodoCola(int _tiempoCola, int _tiempoCaja, NodoCola* _siguiente) : tiempoEnCola(_tiempoCola), tiempoDeAtencion(_tiempoCaja), anterior(nullptr), siguiente(_siguiente), estado("ENTRANDO") {
	posiciones[0][0] = 0;
	posiciones[0][1] = 0;
}

NodoCola::NodoCola() : tiempoEnCola(0), tiempoDeAtencion(0), siguiente(nullptr), anterior(nullptr),estado("ENTRANDO") {
	posiciones[0][0] = 0;
	posiciones[0][1] = 0;
}

void NodoCola::setTiempoCaja(float _tiempoCaja) {
	this->tiempoDeAtencion = _tiempoCaja;
}

void NodoCola::setTiempoCola(float _tiempoCola) {
	this->tiempoEnCola = _tiempoCola;
}

void NodoCola::setSiguiente(NodoCola* _siguiente) {
	this->siguiente = _siguiente;
}

void NodoCola::setAnterior(NodoCola* _anterior) {
	this->anterior = _anterior;
}

float NodoCola::getTiempoCaja() {
	return this->tiempoDeAtencion;
}

float NodoCola::getTiempoCola() {
	return this->tiempoEnCola;
}

NodoCola* NodoCola::getSiguiente() {
	return this->siguiente;
}

NodoCola* NodoCola::getAnterior() {
	return this->anterior;
}

void NodoCola::setPosiciones(int X, int Y) {
	this->posiciones[0][0] = X;
	this->posiciones[0][1] = Y;
}

int NodoCola::getNumeroCola() {
	return this->numeroCola;
}

void NodoCola::movimiento() {
	if (estado == "ENTRANDO") {
		if (posiciones[0][0] == 0) {
			posiciones[0][0]++;
		}
		else if (posiciones[0][0] == 102 && numeroCola == 1) {
			if (posiciones[0][0]++ != anterior->posiciones[0][0])
				posiciones[0][0]++;
		}
		else if (posiciones[0][0] == 102 && numeroCola != 1) {
			if (siguiente == nullptr) {
				if (posiciones[0][1] != numeroCola * 63)
					posiciones[0][1]++;
				else if (posiciones[0][0]++ != 574)
					posiciones[0][0]++;
				else if (posiciones[0][0] == 574)
					estado = "EN CAJA";
			}
			else {
				if (posiciones[0][1] != numeroCola * 63)
					posiciones[0][1]++;
				else if (posiciones[0][0]++ != siguiente->posiciones[0][0] - 25)
					posiciones[0][0]++;
				else if (posiciones[0][0]++ == siguiente->posiciones[0][0] - 25)
					estado = "EN COLA";
			}
		}
	}
	else if (estado == "EN COLA") {
		if (siguiente->estado == "SALIENDO")
			estado = "EN CAJA";
		else {
			start = std::chrono::system_clock::now();
			end = std::chrono::system_clock::now();

			std::chrono::duration<float, std::milli> duration = end - start;
			tiempoEnCola += duration.count();
		}
	}
	else if (estado == "EN CAJA") {
		if (posiciones[0][0] != 574)
			posiciones[0][0]++;
		else if (tiempoDeAtencion > maxTiempoEnCaja)
			estado = "SALIENDO";
		else {
			start = std::chrono::system_clock::now();
			end = std::chrono::system_clock::now();

			std::chrono::duration<float, std::milli> duration = end - start;
			tiempoDeAtencion += duration.count();
		}
	}
	else if (estado == "SALIENDO") {
		if (posiciones[0][0] == 574 && posiciones[0][0] < 718)
			posiciones[0][0]++;
		else if(posiciones[0][1] != 58)
			posiciones[0][1]++;
		else if (posiciones[0][1] == 58)
			posiciones[0][0]++;
	}
}

string NodoCola::getEstado() {
	return this->estado;
}

void NodoCola::setEstado(string _estado){
	this->estado = _estado;
}

int NodoCola::getX() {
	return posiciones[0][0];
}

int NodoCola::getY() {
	return posiciones[0][1];
}

void NodoCola::setMaxTiempoEnCaja(float tiempo) {
	this->maxTiempoEnCaja = tiempo;
}

float NodoCola::getMaxTiempoEnCaja() {
	return this->maxTiempoEnCaja;
}