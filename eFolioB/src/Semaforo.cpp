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
		case desligado:	cout << "Semaforo desactivado"     << endl;	break;
		case vermelho:	cout << "!!!!! Vermelho !!!!!"     << endl;	break;
		case amarelo:	cout << "! Amarelo !"              << endl; break;
		case verde:		cout << "Verde!"                   << endl; break;
		default:		cout << "XXX Estado invalido XXXX" << endl; break;
	};
	return estado;
}

void Semaforo::mudaEstado(){

	switch (estado){
		case desligado:
			estado = verde;
			retornaStatus();
			break;
		case vermelho: //Vermelho
			retornaStatus();
			this_thread::sleep_for(chrono::seconds(30));
		case amarelo: //Amarelo
			if (estado == vermelho){
				estado = amarelo;
				retornaStatus();
				estado = verde;
			} else {
				estado = amarelo;
				retornaStatus();
				estado = vermelho;
			}
			this_thread::sleep_for(chrono::seconds(25));
			break;
		case verde: //Verde
			retornaStatus();
			this_thread::sleep_for(chrono::seconds(5));
			estado = amarelo;
			break;
		default:
			estado = desligado;
			retornaStatus();
	};

}

