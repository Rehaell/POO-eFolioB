/*
 * SemaforoRodoviario.cpp
 *
 *  Created on: Dec 11, 2018
 *      Author: rui romao
 */

#include "SemaforoRodoviario.h"

SemaforoRodoviario::SemaforoRodoviario(){
	cout << "Semaforo Rodoviario criado!" << endl;
	estado = desligado;
	retornaStatus();

}

void SemaforoRodoviario::mudaEstadoAuto(){

	switch (estado){
		case desligado:
			retornaStatus();
			mudaParaEstado(verde);
			break;
		case vermelho:
			retornaStatus();
			this_thread::sleep_for(chrono::seconds(35));
		case amarelo:
			if (estado == vermelho){
				mudaParaEstado(amarelo);
				retornaStatus();
				mudaParaEstado(verde);
			} else {
				mudaParaEstado(amarelo);
				retornaStatus();
				mudaParaEstado(vermelho);
			}
			this_thread::sleep_for(chrono::seconds(25));
			break;
		case verde:
			retornaStatus();
			this_thread::sleep_for(chrono::seconds(5));
			mudaParaEstado(amarelo);
			break;
		default:
			mudaParaEstado(desligado);
			retornaStatus();
	};
}


