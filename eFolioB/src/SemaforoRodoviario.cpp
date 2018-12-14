/*
 * SemaforoRodoviario.cpp
 *
 *  Created on: Dec 11, 2018
 *      Author: rui romao
 */

#include "SemaforoRodoviario.h"

//De acordo com o enunciado, constroi um objecto Semaforo Rodoviario e inicializa-o no estado de desligado
SemaforoRodoviario::SemaforoRodoviario(){
	cout << "Semaforo Rodoviario criado!" << endl;
	estado = desligado;
	retornaStatus();

}
/****************************************************************************************
 * NOME: mudaEstadoAuto		                                                 			*
 * -------------------------------------------------------------------------------------*
 * VARIAVEIS: NIL               	                                         			*
 * -------------------------------------------------------------------------------------*
 * FUNCAO: mudar automaticamente o estado do semaforo respeitando os tempos de espera 	*
 * em cada estado dado pelo enunciado													*
 *                                                                         				*
 ***************************************************************************************/
void SemaforoRodoviario::mudaEstadoAuto(){

	//De acordo com o "estado" efectua a respectiva operacao
	switch (estado){
		case desligado: //caso o semaforo se encontre desactivad, activa-o passando o seu estado para verde
			retornaStatus();
			mudaParaEstado(verde);
			break;
		case vermelho: //Mostra o sinal vermelho e espera 35 segundos para passar obrigatoriamente para o estado amarelo
			retornaStatus();
			this_thread::sleep_for(chrono::seconds(35));
			//no break - continua sempre do vermelho para o amarelo passados 35 segundos.
		case amarelo: //neste estado, testa-se qual o estado anterior e apos 5 segundos comuta-se o estado para o proximo estado
			if (estado == vermelho){
				mudaParaEstado(amarelo);
				retornaStatus();
				mudaParaEstado(verde); //caso o estado anterior tenha sido vermelho, o semaforo tera que caminhar para verde apos mostrar o sinal amarelo
			} else {
				mudaParaEstado(amarelo);
				retornaStatus();
				mudaParaEstado(vermelho); //caso o estado anterior tenha sido verde, o semaforo tera que caminhar para vermelho apos mostrar o sinal amarelo
			}
			this_thread::sleep_for(chrono::seconds(5));
			break;
		case verde: //fica neste estado por 25 segundos, comutando o estado para amarelo apos expirar a contagem
			retornaStatus();
			this_thread::sleep_for(chrono::seconds(25));
			mudaParaEstado(amarelo);
			break;
		default: //desliga o semaforo se o estado nao for valido
			mudaParaEstado(desligado);
			retornaStatus();
	};
}


