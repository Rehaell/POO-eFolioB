//============================================================================
// Name        : eFolioB.cpp
// Author      : rui romao
// Version     :
// Copyright   : 
//============================================================================

#include <iostream>
#include "Semaforo.h"

using namespace std;

int main() {

	Semaforo semaforo_rodoviario;

	do{
		semaforo_rodoviario.mudaEstado(semaforo_rodoviario.desligado);
		semaforo_rodoviario.mudaEstado(semaforo_rodoviario.vermelho);
		semaforo_rodoviario.mudaEstado(semaforo_rodoviario.amarelo);
		semaforo_rodoviario.mudaEstado(semaforo_rodoviario.verde);
		semaforo_rodoviario.mudaEstado(semaforo_rodoviario.amarelo);
		semaforo_rodoviario.mudaEstado(semaforo_rodoviario.vermelho);
	} while (true);

	cout << "Adeus";




	return 0;
}
