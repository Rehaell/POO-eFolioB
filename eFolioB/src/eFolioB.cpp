//============================================================================
// Name        : eFolioB.cpp
// Author      : rui romao
// Version     :
// Copyright   : 
//============================================================================

#include <iostream>
#include "SemaforoRodoviario.h"
#include "SemaforoFerroviario.h"

using namespace std;

int main() {

	SemaforoRodoviario semaforo_rodoviario;
	SemaforoFerroviario semaforo_ferroviario;
	signed int distancia_comboio;

	distancia_comboio = 10;
	do{
			cout << "O comboio esta a: " << distancia_comboio << "km" << endl;
			semaforo_ferroviario.mudaEstadoAuto(distancia_comboio);
			this_thread::sleep_for(chrono::seconds(1));
			--distancia_comboio;
	} while(distancia_comboio !=-10);

	do{
		semaforo_rodoviario.mudaEstadoAuto();
	} while (true);

	cout << "Adeus";

	return 0;
}
