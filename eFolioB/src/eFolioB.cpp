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
		semaforo_rodoviario.mudaEstado();
	} while (true);

	cout << "Adeus";




	return 0;
}
