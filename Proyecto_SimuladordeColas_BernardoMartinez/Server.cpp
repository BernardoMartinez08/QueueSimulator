#include "Server.h"

#include <iostream>
#include <vector>
using namespace std;

Server::Server(Cola* fila) : tiempoPromedioEnCola(0), clientesAtendidos(0) {
	this->setCola(fila);
	this->longCola = fila->size();
	Servidores.push_back(this);
}

Server::Server() {

}

void Server::setCola(Cola* _colaClientes) {
	this->colaClientes = _colaClientes;
	actualizarLongCola();
	actualizarTiempoPromedio();
}

void Server::actualizarClientesAtendidos() {
	this->clientesAtendidos++;
}

void Server::actualizarLongCola() {
	this->longCola = this->colaClientes->size();
}

void Server::actualizarTiempoPromedio() {
	float sumaTiempos = 0;
	Cola* colaAux = this->colaClientes;

	int cont = 0;
	while(cont < colaAux->size()){
		sumaTiempos += colaAux->front()->getMaxTiempoEnCaja();
		colaAux->pop_front();
	}

	tiempoPromedioEnCola = sumaTiempos;
}

int Server::getClientesAtendidos() {
	return this->clientesAtendidos;
}

int Server::getLongCola() {
	return this->longCola;
}

float Server::getTiempoPromedioCola() {
	return this->tiempoPromedioEnCola;
}

string Server::getEstado() {
	return this->estado;
}

void Server::actualizarEstado(string _estado) {
	this->estado = _estado;
}

Cola* Server::getCola() {
	return this->colaClientes;
}

