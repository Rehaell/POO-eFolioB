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

void SemaforoFerroviario::tocaSinalSonoro(bool interruptor){
	if (interruptor){
		cout << "!PIIIIIIIIIIIIIIIII!" << endl;
		sinal_sonoro = true;
	} else
		sinal_sonoro = false;
	retornaStatus();
}

void SemaforoFerroviario::mudaEstadoAuto(signed int posicao_comboio){
	if (posicao_comboio <=5 && posicao_comboio >=-5){
		if (!retornaSinalSonoro()){
			mudaParaEstado(amarelo);
			mudaParaEstado(vermelho);
		} else
			mudaParaEstado(vermelho);
		tocaSinalSonoro(true);
	} else {
		if (retornaSinalSonoro()){
			mudaParaEstado(amarelo);
			mudaParaEstado(verde);
		} else
			mudaParaEstado(verde);
		tocaSinalSonoro(false);
	}
};


