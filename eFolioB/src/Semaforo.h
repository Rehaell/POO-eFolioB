/*
 * Semaforo.h
 *
 *  Created on: Dec 11, 2018
 *      Author: rehaell
 */

#ifndef SEMAFORO_H_
#define SEMAFORO_H_

#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

class Semaforo {
	enum {
		desligado = 0,
		vermelho,
		amarelo,
		verde,
	} status;

	clock_t temporizador;
	vector<int> contador_status;

public:

	Semaforo();


};


#endif /* SEMAFORO_H_ */
