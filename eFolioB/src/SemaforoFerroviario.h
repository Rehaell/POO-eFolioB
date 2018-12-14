/*
 * SemaforoFerroviario.h
 *
 *  Created on: Dec 11, 2018
 *      Author: rui romao
 */

#ifndef SEMAFOROFERROVIARIO_H_
#define SEMAFOROFERROVIARIO_H_

#include "Semaforo.h"
/****************************************************************************************
 * NOME: Classe SemaforoFerroviario														*
 *--------------------------------------------------------------------------------------*
 * DESCRICAO:																			*
 * Classe filha, que herda da classe Semaforo todos os seus metodos e variaveis e 		*
 * que auxilia 'a criacao de um objecto do tipo Semaforo Ferroviario.					*
 *--------------------------------------------------------------------------------------*
 * VARIAVEIS:																			*
 * bool sinal_sonoro - variavel do tipo boolean que armazena o estado actual do sinal 	*
 * 					   sonoro de proximidade de comboio.								*
 *--------------------------------------------------------------------------------------*
 * METODOS:																				*
 * void mudaEstadoAuto(signed int posicao_comboio) - definicao do metodo virtual 		*
 * 													 herdado da classe Semaforo, que 	*
 * 													 recebe a posicao de um possivel 	*
 * 													 comboio e faz a gestao automatica  *
 * 													 dos semaforos.						*
 * void tocaSinalSonoro(bool interruptor) - activa/desactiva o sinal sonoro consoante  	*
 * 											 o estado de um interruptor virtual			*
 * 																						*
 * inline bool retornaSinalSonoro() - retorna o estado actual do sinal sonoro 			*
 * 																						*
 ***************************************************************************************/
class SemaforoFerroviario: public Semaforo {

	bool sinal_sonoro;
public:
	SemaforoFerroviario();
	~SemaforoFerroviario(){}

	void mudaEstadoAuto(signed int posicao_comboio);
	void tocaSinalSonoro(bool interruptor);
	inline bool retornaSinalSonoro() { return sinal_sonoro; }
};

#endif /* SEMAFOROFERROVIARIO_H_ */
