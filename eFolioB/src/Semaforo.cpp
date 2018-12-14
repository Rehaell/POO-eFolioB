/*
 * Semaforo.cpp
 *
 *  Created on: Dec 11, 2018
 *      Author: rui romao
 */

#include "Semaforo.h"

//Cria o objecto semaforo no estado default de desligado
Semaforo::Semaforo(): estado(desligado) {}

/****************************************************************************************
 * NOME: retornaStatus		                                                 			*
 * -------------------------------------------------------------------------------------*
 * VARIAVEIS: NIL               	                                         			*
 * -------------------------------------------------------------------------------------*
 * FUNCAO: apresentar na consola o estado actual em formato texto e retornar o estado 	*
 * 		   actual em formato inteiro para possivel utilizacao							*
 *                                                                         				*
 ***************************************************************************************/
int Semaforo::retornaStatus() const {
	switch (this->estado){
		case desligado:	cout << "Semaforo desactivado\n\n"     << endl;	break;
		case vermelho:	cout << "!!!!! Vermelho !!!!!\n\n"     << endl;	break;
		case amarelo:	cout << "! Amarelo !\n\n"              << endl; break;
		case verde:		cout << "Verde!\n\n"                   << endl; break;
		default:		cout << "XXX Estado invalido XXXX\n\n" << endl; break;
	};
	return this->estado;
}
