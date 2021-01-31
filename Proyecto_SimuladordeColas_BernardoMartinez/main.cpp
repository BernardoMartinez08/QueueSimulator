
#include "Simulador.h"
#include <iostream>
#include <conio.h>
using namespace std;
using namespace ProyectoSimuladordeColasBernardoMartinez;
int main() {
	Application::EnableVisualStyles();
	Application::Run(gcnew Simulador);

	_getch();
	return 0;
}