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

/****************************************************************************************
 *  NOME: Classe Semaforo                         										*
 *  ------------------------------------------------------------------------------------*
 *  DESCRICAO:                                    										*
 *  Classe base Semaforo, que contem uma variavel enumerado estado do tipo Estados e 	*
 *  que contem o estado actual do semaforo.                  							*
 *  ------------------------------------------------------------------------------------*
 *  METODOS:                                                                        	*
 *  int retornaStatus() - retorna um int correspondente ao estado actual do semaforo	*
 *  					  e paralelamente imprime na consola o estado actual.			*
 *  					  																*
 *  void mudaParaEstado(Estados novo_estado) - altera o estado actual para o valor que  *
 *                                             e' passado 'a funcao.                    *
 *                                             											*
 *  virtual void mudaEstadoAuto() - metodo virtual a usar numa classe filha.            *
 *  																					*
 *  virtual void mudaEstadoAuto(int posicao_comboio) - metodo virtual a usar numa 		*
 *  												   classe filha em que e' 			*
 *  												   especificado uma distancia para 	*
 *  												   um possivel comboio.				*
 *  												   									*
 ****************************************************************************************/
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
	virtual ~Semaforo(){}

	int retornaStatus() const;
	inline void mudaParaEstado(Estados novo_estado) { estado = novo_estado; }

	virtual void mudaEstadoAuto(){}
	virtual void mudaEstadoAuto(int posicao_comboio){}

};


#endif /* SEMAFORO_H_ */
