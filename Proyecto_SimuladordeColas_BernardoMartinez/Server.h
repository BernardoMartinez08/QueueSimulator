#pragma once
#ifndef SERVER_H
#define SERVER_H
#include <iostream>
#include <string>
#include "Cola.h"
#include "NodoCola.h"
#include <vector>

using namespace std;

class Server {
public:
	Server(Cola*);
	Server();

	void setCola(Cola*);
	void actualizarTiempoPromedio();
	void actualizarLongCola();
	void actualizarClientesAtendidos();
	void actualizarEstado(string);

	int getClientesAtendidos();
	int getLongCola();
	float getTiempoPromedioCola();
	string getEstado();

	Cola* getCola();

	vector<Server*> Servidores;
private:
	Cola* colaClientes;

	float tiempoPromedioEnCola;
	int longCola;
	int clientesAtendidos;
	string estado;
};

#endif // !SERVER_H
