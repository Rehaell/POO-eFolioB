//============================================================================
// Name        : eFolioB.cpp
// Author      : rui romao
// Version     :
// Copyright   : 
//============================================================================

#include <iostream>
#include "SemaforoRodoviario.h"

using namespace std;

int main() {

	SemaforoRodoviario semaforo_rodoviario;

	do{
		semaforo_rodoviario.mudaEstadoAuto();
	} while (true);

	cout << "Adeus";




	return 0;
}
