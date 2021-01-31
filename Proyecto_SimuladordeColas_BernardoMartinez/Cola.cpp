#include "Cola.h"

#include <iostream>
using namespace std;

Cola::Cola() : _front(nullptr), _back(nullptr) {
}

bool Cola::isEmpty() {
	return _front == nullptr;
}

void Cola::push() {
	NodoCola* nuevo = new NodoCola(0,0, nullptr);

	if (isEmpty()) {
		_front = nuevo;
		_back = nuevo;
	}
	else {
		NodoCola* actual = _front;

		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}

		actual->setSiguiente(nuevo);
		_back = nuevo;
	}
}

void Cola::pop() {
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

	do {
		cantidad++;
		actual = actual->getSiguiente();
	} while (actual != nullptr);

	return cantidad;
}