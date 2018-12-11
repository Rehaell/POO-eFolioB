/*
 * Semaforo.cpp
 *
 *  Created on: Dec 11, 2018
 *      Author: rui romao
 */

#include "Semaforo.h"

Semaforo::Semaforo(): estado(desligado) {
	cout << "Semaforo criado" << endl;
}

int Semaforo::retornaStatus() const {
	switch (estado){
		case desligado:	cout << "Semaforo desactivado\n\n"     << endl;	break;
		case vermelho:	cout << "!!!!! Vermelho !!!!!\n\n"     << endl;	break;
		case amarelo:	cout << "! Amarelo !\n\n"              << endl; break;
		case verde:		cout << "Verde!\n\n"                   << endl; break;
		default:		cout << "XXX Estado invalido XXXX\n\n" << endl; break;
	};
	return estado;
}
