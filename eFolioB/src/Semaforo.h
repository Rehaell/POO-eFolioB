/*
 * Semaforo.h
 *
 *  Created on: Dec 11, 2018
 *      Author: rui romao
 */

#ifndef SEMAFORO_H_
#define SEMAFORO_H_

#include <iostream>
#include <vector>
#include <string>
#include <thread>
#include <chrono>



using namespace std;

class Semaforo {

protected:
	enum Estados {
		desligado = 0,
		vermelho,
		amarelo,
		verde,
	} estado;

public:

	Semaforo();
	~Semaforo() {}

	int retornaStatus() const;
	virtual void mudaEstadoAuto() {}
	inline void mudaParaEstado(Estados novo_estado) { estado = novo_estado; }

};


#endif /* SEMAFORO_H_ */
