#include "NodoCola.h"

NodoCola::NodoCola(int _tiempoCaja, int _numeroCola, NodoCola* _siguiente, NodoCola* anterior) {
	this->maxTiempoEnCaja = _tiempoCaja;
	this->numeroCola = _numeroCola;
	this->siguiente = nullptr;
	this->anterior = nullptr;

	this->estado = "ENTRANDO";

	this->tiempoEnCola = 0;
	this->tiempoDeAtencion = 0;

	posiciones[0][0] = 0;
	posiciones[0][1] = 58;
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

void NodoCola::setMaxTiempoEnCaja(float tiempo) {
	this->maxTiempoEnCaja = tiempo;
}

float NodoCola::getMaxTiempoEnCaja() {
	return this->maxTiempoEnCaja;
}

NodoCola* NodoCola::getSiguiente() {
	return this->siguiente;
}

NodoCola* NodoCola::getAnterior() {
	return this->anterior;
}

int NodoCola::getNumeroCola() {
	return this->numeroCola;
}

void NodoCola::movimiento(float _tiempo) {
	start = std::chrono::steady_clock::now();
	if (estado == "ENTRANDO") {
		if (posiciones[0][0] == 0 || posiciones[0][0] < 102) {
			if (first)
				posiciones[0][0]++;
			else if ((posiciones[0][0] + 25) < siguiente->posiciones[0][0])
				posiciones[0][0]++;
		}
		else if (posiciones[0][0] >= 102 && numeroCola == 0) {
			if (first) {
				if (posiciones[0][0] < 574)
					posiciones[0][0]++;
				else if (posiciones[0][0] == 574)
					estado = "EN CAJA";
			}
			else {
				if ((posiciones[0][0] + 25) < siguiente->posiciones[0][0])
					posiciones[0][0]++;
				else if ((posiciones[0][0] + 25) == siguiente->posiciones[0][0])
					estado = "EN COLA";
			}

		}
		else if (posiciones[0][0] >= 102 && numeroCola != 0) {
			if (first) {
				if (posiciones[0][1] != numeroCola * 63)
					posiciones[0][1]++;
				else if (posiciones[0][0] < 574)
					posiciones[0][0]++;
				else if (posiciones[0][0] == 574)
					estado = "EN CAJA";
			}
			else {
				if (posiciones[0][1] != numeroCola * 63)
					posiciones[0][1]++;
				else if (posiciones[0][0]++ < siguiente->posiciones[0][0] - 25)
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
			end = std::chrono::steady_clock::now();

			std::chrono::duration<float> duration = end - start;
			tiempoEnCola = (_tiempo + duration.count());
		
		}
	}
	else if (estado == "EN CAJA") {
		if (posiciones[0][0] < 574)
			posiciones[0][0]++;
		else if (tiempoDeAtencion > maxTiempoEnCaja)
			estado = "SALIENDO";
		else {
			end = std::chrono::steady_clock::now();

			std::chrono::duration<float> duration = end - start;
			tiempoDeAtencion = (_tiempo + duration.count());
		}
	}
	else if (estado == "SALIENDO") {
		if (posiciones[0][0] == 574 || posiciones[0][0] < 718)
			posiciones[0][0]++;
		else if (posiciones[0][1] != 58)
			posiciones[0][1]--;
		else if (posiciones[0][1] == 58)
			posiciones[0][0]++;
	}
}

string NodoCola::getEstado() {
	return this->estado;
}

void NodoCola::setEstado(string _estado) {
	this->estado = _estado;
}

int NodoCola::getX() {
	return posiciones[0][0];
}

int NodoCola::getY() {
	return posiciones[0][1];
}