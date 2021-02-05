#include "Cola.h"
#include <iostream>
#include <vector>
using namespace std;

Cola::Cola() : _front(nullptr), _back(nullptr) {
	Colas.push_back(this);
}

bool Cola::isEmpty() {
	return _front == nullptr;
}

void Cola::push_back(float _tiempoAtencion) {
	NodoCola* nuevo = new NodoCola(0,_tiempoAtencion, nullptr);

	if (isEmpty()) {
		_front = nuevo;
		_back = nuevo;
	}
	else {
		_back->setSiguiente(nuevo);
		_back = nuevo;
	}
}

void Cola::pop_front() {
	if (isEmpty())
		return;

	NodoCola* aux = _front->getSiguiente();
	delete _front;
	_front = aux;

}

NodoCola* Cola::front() {
	return _front;
}

NodoCola* Cola::back() {
	return _back;
}

int Cola::size() {
	if (isEmpty())
		return 0;

	int cantidad = 0;
	NodoCola* actual = _front;

	while (actual != nullptr) {
		cantidad++;
		actual = actual->getSiguiente();
	}

	return cantidad;
}

int Cola::getNumeroServidor() {
	return this->numeroServidor;
}