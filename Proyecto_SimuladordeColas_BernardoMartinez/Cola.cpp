#include "Cola.h"
#include <iostream>
#include <vector>
using namespace std;

vector<Cola*> Colas;
Cola::Cola() : primero(nullptr), ultimo(nullptr) {
	numeroCola = Colas.size() - 1;
	Colas.push_back(this);
}

bool Cola::isEmpty() {
	return primero == nullptr;
}

vector<Cola*> Cola::getColas() {

	return Colas;
}

void Cola::push_back(float _tiempoAtencion) {
	NodoCola* nuevo = new NodoCola(_tiempoAtencion, numeroCola, nullptr, nullptr);

	if (isEmpty()) {
		primero = ultimo = nuevo;
		primero->setAnterior(ultimo);
		ultimo->setSiguiente(primero);
		primero->first = true;
	}
	else {
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);
		ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
		ultimo->first = false;
	}
}

void Cola::pop_front() {
	if (isEmpty()) {
		cout << "La lista esta vacia!!!";
		return;
	}
	else if (primero == ultimo) {
		delete primero;

		primero = ultimo = nullptr;
	}
	else {
		NodoCola* aux = primero;

		primero = primero->getSiguiente();
		primero->setAnterior(ultimo);
		ultimo->setSiguiente(primero);

		primero->first = true;
		delete aux;
	}

}

NodoCola* Cola::front() {
	return primero;
}

NodoCola* Cola::back() {
	return ultimo;
}

int Cola::size() {
	if (isEmpty())
		return 0;

	int count = 0;

	NodoCola* actual = primero;
	do {
		count++;
		actual = actual->getSiguiente();
	} while (actual != primero);

	return count;
}

int Cola::getNumeroServidor() {
	return this->numeroServidor;
}

void Cola::movimientoClientes(float _tiempo) {
	if (isEmpty()) {
		return;
	}
	else {

		NodoCola* actual = primero;
		do {
			actual->movimiento(_tiempo);
			actual = actual->getSiguiente();
		} while (actual != primero);

	}
}

float Cola::promedioTiempoCola() {
	if (isEmpty()) {
		return 0;
	}
	else {
		float suma = 0;
		int cont = 0;
		float promedioColaTime = 0;
		NodoCola* actual = primero;
		do {
			suma += actual->getTiempoCaja();
			cont++;
			actual = actual->getSiguiente();
		} while (actual != primero);

		promedioColaTime = (suma / cont);
		return promedioColaTime;
	}
}

float Cola::promedioTiempoCaja() {
	if (isEmpty()) {
		return 0;
	}
	else {
		float suma = 0;
		int cont = 0;
		float promedioCajaTime = 0;
		NodoCola* actual = primero;
		do {
			suma += actual->getTiempoCaja();
			cont++;
			actual = actual->getSiguiente();
		} while (actual != primero);

		promedioCajaTime = (suma / cont);
		return promedioCajaTime;
	}
}

int Cola::totalClientes() {
	if (isEmpty()) {
		return 0;
	}
	else {
		int cont = 0;
		NodoCola* actual = primero;
		do {
			cont++;
			actual = actual->getSiguiente();
		} while (actual != primero);

		return cont;
	}
}

void Cola::print() {
	if (isEmpty()) {
		cout << "\nLa lista " << numeroCola << " esta vacia!!!\n";
	}
	else {

		NodoCola* actual = primero;
		do {
			cout << "Estado: " << actual->getEstado() << "\nMaximo Tiempo En Caja: " << actual->getMaxTiempoEnCaja()
				<< "\nNumero de Cola: " << actual->getNumeroCola() << "\nTiempo en Cola: " << actual->getTiempoCola()
				<< "\nTiempo en Caja: " << actual->getTiempoCaja() << "\nPosiciones: (" << actual->getX() << "," << actual->getY()
				<< ")" << "\nPrimero: " << actual->first;
			cout << "\n\n";
			actual = actual->getSiguiente();
		} while (actual != primero);

	}
}