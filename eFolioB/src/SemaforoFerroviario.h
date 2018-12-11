/*
 * SemaforoFerroviario.h
 *
 *  Created on: Dec 11, 2018
 *      Author: rehaell
 */

#ifndef SEMAFOROFERROVIARIO_H_
#define SEMAFOROFERROVIARIO_H_

#include "Semaforo.h"

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
