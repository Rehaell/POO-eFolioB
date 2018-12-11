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

	vector<int> contador_estado;

public:

	enum Estados {
		desligado = 0,
		vermelho,
		amarelo,
		verde,
	} estado;

	Semaforo();
	~Semaforo() {}
	int retornaStatus() const;
	void mudaEstado();

};


#endif /* SEMAFORO_H_ */
