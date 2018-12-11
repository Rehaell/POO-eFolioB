/*
 * Semaforo.cpp
 *
 *  Created on: Dec 11, 2018
 *      Author: rui romao
 */

#include "Semaforo.h"

Semaforo::Semaforo(): estado(desligado), temporizador(0), contador_estado(0){
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

void Semaforo::mudaEstado(Estados novo_estado){

	switch (novo_estado){
		case desligado:
			estado = desligado;
			retornaStatus();
			break;
		case vermelho: //Vermelho
			estado = vermelho;
			retornaStatus();
			this_thread::sleep_for(chrono::seconds(5));
			break;
		case amarelo: //Amarelo
			estado = amarelo;
			retornaStatus();
			this_thread::sleep_for(chrono::seconds(2));
			break;
		case verde: //Verde
			estado = verde;
			retornaStatus();
			this_thread::sleep_for(chrono::seconds(1));
			break;
		default:
			estado = desligado;
			retornaStatus();
	};

}

