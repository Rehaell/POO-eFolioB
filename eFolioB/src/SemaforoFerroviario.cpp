/*
 * SemaforoFerroviario.cpp
 *
 *  Created on: Dec 11, 2018
 *      Author: rehaell
 */
#include "SemaforoFerroviario.h"

SemaforoFerroviario::SemaforoFerroviario(): sinal_sonoro(false) {
	cout << "Semaforo Ferroviario criado!" << endl;
	estado = verde;
	retornaStatus();
}

void SemaforoFerroviario::mudaEstadoAuto(){

};


