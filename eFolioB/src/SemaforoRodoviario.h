/*
 * SemaforoRodoviario.h
 *
 *  Created on: Dec 11, 2018
 *      Author: rui romao
 */

#ifndef SEMAFORORODOVIARIO_H_
#define SEMAFORORODOVIARIO_H_

#include "Semaforo.h"
/****************************************************************************************
 * NOME: Classe SemaforoRodoviario														*
 *--------------------------------------------------------------------------------------*
 * DESCRICAO:																			*
 * Classe filha, que herda da classe Semaforo todos os seus metodos e variaveis e 		*
 * que auxilia 'a criacao de um objecto do tipo Semaforo Rodoviario						*
 *--------------------------------------------------------------------------------------*
 * METODOS:																				*
 * mudaEstadoAuto() - definicao do metodo virtual herdado mudaEstadoAuto()              *
 * 																						*
 ***************************************************************************************/
class SemaforoRodoviario: public Semaforo {

public:
	SemaforoRodoviario();
	~SemaforoRodoviario(){}

	void mudaEstadoAuto();
};

#endif /* SEMAFORORODOVIARIO_H_ */
