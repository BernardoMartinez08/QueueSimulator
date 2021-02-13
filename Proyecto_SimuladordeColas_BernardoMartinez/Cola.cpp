#include "Cola.h"
#include <iostream>
#include <vector>
using namespace std;

vector<Cola*> Colas;
Cola::Cola() : primero(nullptr), ultimo(nullptr) {
	numeroCola = Colas.size();
	auxTiempoAtencion = 0;
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
		//primero = ultimo = nuevo;
		nuevo->first = true;
		primero = ultimo = nuevo;
		primero->setSiguiente(nullptr);
		primero->setAnterior(nullptr);
		//primero->setAnterior(ultimo);
		//ultimo->setSiguiente(primero);
		//primero->setSiguiente(nullptr);
	}
	else {
		//ultimo->setSiguiente(nuevo);
		//nuevo->setAnterior(ultimo);
		//ultimo = nuevo;

		//ultimo->setSiguiente(primero);
		//primero->setAnterior(ultimo);
		//ultimo->first = false;

		NodoCola* actual = primero;
		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}
		nuevo->first = false;
		actual->setSiguiente(nuevo);
		ultimo = nuevo;
		ultimo->setAnterior(actual);
		ultimo->setSiguiente(nullptr);
	}
}

void Cola::pop_front() {
	//if (isEmpty()) {
	//	cout << "La lista esta vacia!!!";
	//	return;
	//}
	//else if (primero == ultimo) {
	//	delete primero;
	//	primero = nullptr;
	//	//primero = ultimo = nullptr;
	//}
	//else {
	//	NodoCola* aux = primero;

	//	primero = primero->getSiguiente();
	//	//primero->setAnterior(ultimo);
	//	//ultimo->setSiguiente(primero);

	//	primero->first = true;
	//	delete aux;
	//}

	if (isEmpty())
		return;

	NodoCola* aux = primero->getSiguiente();
	delete primero;
	primero = aux;

	if(primero != nullptr)
		primero->first = true;

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
	while (actual != nullptr) {
		count++;
		actual = actual->getSiguiente();
	} 

	return count;
}

int Cola::getNumeroServidor() {
	return this->numeroServidor;
}

void Cola::movimientoClientes() {
	if (isEmpty()) {
		return;
	}
	else {

		NodoCola* actual = primero;
		while (actual != nullptr) {
			actual->movimiento();
			actual = actual->getSiguiente();
		}

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
		while (actual != nullptr) {
			suma += actual->getTiempoCola();
			cont++;
			actual = actual->getSiguiente();
		}

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
		while (actual != nullptr) {
			suma += actual->getMaxTiempoEnCaja();
			cont++;
			actual = actual->getSiguiente();
		}

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
		while (actual != nullptr) {
			cont++;
			actual = actual->getSiguiente();
		}

		return cont;
	}
}

void Cola::print() {
	if (isEmpty()) {
		cout << "\nLa lista " << numeroCola << " esta vacia!!!\n";
	}
	else {

		NodoCola* actual = primero;
		while (actual != nullptr) {
			cout << "Estado: " << actual->getEstado() << "\nMaximo Tiempo En Caja: " << actual->getMaxTiempoEnCaja()
				<< "\nNumero de Cola: " << actual->getNumeroCola() << "\nTiempo en Cola: " << actual->getTiempoCola()
				<< "\nTiempo en Caja: " << actual->getTiempoCaja() << "\nPosiciones: (" << actual->getX() << "," << actual->getY()
				<< ")" << "\nPrimero: " << actual->first;
			cout << "\n\n";
			actual = actual->getSiguiente();
		} 

	}
}

void Cola::setAuxTiempoAtencion(int _valor) {
	this->auxTiempoAtencion += _valor;
}

int Cola::getAuxTiempoAtencion() {
	return this->auxTiempoAtencion;
}

void Cola::putOnCeroTiempoAtencion() {
	this->auxTiempoAtencion = 0;
}

void Cola::clear() {
	if (isEmpty()) {
		return;
	}
	else {
		NodoCola* actual = primero;
		while (actual != nullptr) {
			NodoCola* aux = actual->getSiguiente();
			pop_front();
			actual = aux;
		}
	}
}

