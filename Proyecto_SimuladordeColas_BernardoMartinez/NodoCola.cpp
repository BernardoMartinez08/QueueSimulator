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

int NodoCola::getTiempoCaja() {
	return (int)this->tiempoDeAtencion;
}

int NodoCola::getTiempoCola() {
	return (int)this->tiempoEnCola;
}

void NodoCola::setMaxTiempoEnCaja(float tiempo) {
	this->maxTiempoEnCaja = tiempo;
}

float NodoCola::getMaxTiempoEnCaja() {
	return this->maxTiempoEnCaja;
}

float NodoCola::getMaxTiempoEnCola() {
	return this->tiempoEnCola;
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

void NodoCola::movimiento() {
	start = std::chrono::steady_clock::now();
	if (estado == "ENTRANDO") {
		if (posiciones[0][0] == 0 || posiciones[0][0] < 102) {
			if (first)
				posiciones[0][0]++;
			else if ((posiciones[0][0] + 25) < anterior->posiciones[0][0])
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
				if ((posiciones[0][0] + 25) < anterior->posiciones[0][0]) {
					posiciones[0][0]++;
				}
				else if ((posiciones[0][0] + 25) == anterior->posiciones[0][0]) {
					if (anterior->getEstado() == "EN COLA")
						estado = "EN COLA";
					else if (anterior->getEstado() == "EN CAJA") {
						estado = "EN COLA";
					}
					else if (anterior->getEstado() == "SALIENDO") {
						estado = "EN CAJA";
					
					}
				}
				else
					posiciones[0][0]++;
			}

		}
		else if (posiciones[0][0] >= 102 && numeroCola != 0) {
			if (first) {
				if (posiciones[0][1] != (numeroCola * 63))
					posiciones[0][1]++;
				else if (posiciones[0][0] < 574)
					posiciones[0][0]++;
				else if (posiciones[0][0] == 574)
					estado = "EN CAJA";
			}
			else {
				if (posiciones[0][1] != (numeroCola * 63))
					posiciones[0][1]++;
				else if ((posiciones[0][0] + 25) == anterior->posiciones[0][0]) {
					if (anterior->getEstado() == "EN COLA")
						estado = "EN COLA";
					else if (anterior->getEstado() == "EN CAJA") {
						estado = "EN COLA";
					}
					else if (anterior->getEstado() == "SALIENDO")
						estado = "EN CAJA";
				}
				else
					posiciones[0][0]++;
			}
		}
	}




	else if (estado == "EN COLA") {
		if (anterior->estado == "SALIENDO")
			estado = "EN CAJA";
		else if ((posiciones[0][0] + 25) < anterior->posiciones[0][0])
			posiciones[0][0]++;
		else {
			end = std::chrono::steady_clock::now();

			std::chrono::duration<float> duration = end - start;
			tiempoEnCola += (duration.count()+0.02);
		
		}
	}
	else if (estado == "EN CAJA") {
		first = true;
		if (posiciones[0][0] < 574)
			posiciones[0][0]++;
		else if (tiempoDeAtencion > maxTiempoEnCaja)
			estado = "SALIENDO";
		else {
			end = std::chrono::steady_clock::now();

			std::chrono::duration<float> duration = end - start;
			tiempoDeAtencion += (duration.count() + 0.02);
		}
	}
	else if (estado == "SALIENDO") {
		if (posiciones[0][0] >= 574 || posiciones[0][0] < 718)
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
	if (posiciones[0][0] >= 0)
		return posiciones[0][0];
	else
		return 0;
}

int NodoCola::getY() {
	if (posiciones[0][0] >= 58)
		return posiciones[0][1];
	else
		return 58;
}

void NodoCola::setNumeroImagen(int _num) {
	this->numeroImagen = _num;
}

int NodoCola::getNumeroImagen() {
	return this->numeroImagen;
}
