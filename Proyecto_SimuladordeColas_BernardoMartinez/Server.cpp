#include "Server.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<Server*> Servidores;
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
	this->longCola = this->colaClientes->getEnCola();
}

void Server::actualizarTiempoPromedio() {
	float sumaTiempos = 0;
	NodoCola* colaAux = colaClientes->front();

	if (colaAux != nullptr) {
		int cont = 0;

		do {
			sumaTiempos += colaAux->getMaxTiempoEnCaja();
			colaAux = colaAux->getSiguiente();
		} while (colaAux != colaClientes->front());
	}

	tiempoPromedioEnCola = (sumaTiempos/Servidores.size());
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

vector<Server*> Server::getServers() {
	return Servidores;
}

