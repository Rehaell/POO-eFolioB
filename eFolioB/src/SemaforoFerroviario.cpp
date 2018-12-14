/*
 * SemaforoFerroviario.cpp
 *
 *  Created on: Dec 11, 2018
 *      Author: rui romao
 */
#include "SemaforoFerroviario.h"

//Constroi de acordo com o enunciado um Semaforo Ferroviario com o estado default em verde
SemaforoFerroviario::SemaforoFerroviario(): sinal_sonoro(false) {
	cout << "Semaforo Ferroviario criado!" << endl;
	estado = verde;
	retornaStatus();
}

/****************************************************************************************
 * NOME: tocaSinalSonoro		                                                 		*
 * -------------------------------------------------------------------------------------*
 * VARIAVEIS: bool interruptor															*
 * -------------------------------------------------------------------------------------*
 * FUNCAO: consoante o estado da variavel interruptor, liga e desliga o alarme sonoro	*
 * 		   afectando a variavel sina_sonoro.											*
 *                                                                         				*
 ***************************************************************************************/
void SemaforoFerroviario::tocaSinalSonoro(bool interruptor){
	if (interruptor){
		cout << "!PIIIIIIIIIIIIIIIII!" << endl;
		sinal_sonoro = true;
	} else
		sinal_sonoro = false;
}

/****************************************************************************************
 * NOME: mudaEstadoAuto		                                                 			*
 * -------------------------------------------------------------------------------------*
 * VARIAVEIS: signed int posicao_comboio												*
 * -------------------------------------------------------------------------------------*
 * FUNCAO: recebe a posicao actual de um possivel comboio								*
 * 				- Positiva para comboio a chegar										*
 * 				- Negativa para comboio a partir										*
 * 			Caso o comboio se encontre entre o intervalo de activacao dos semaforos e 	*
 * 			campainha [-5, 5], activa o semaforo vermelho e toca a campainha.			*
 * 			Assim que o comboio se afasta mais de 5km deixa de tocar a campainha e		*
 * 			e comuta para verde o sinal sonoro											*
 *                                                                         				*
 ***************************************************************************************/
void SemaforoFerroviario::mudaEstadoAuto(signed int posicao_comboio){
	if (posicao_comboio <=5 && posicao_comboio >=-5){
		if (!retornaSinalSonoro()){ //caso o sinal sonoro nao esteja activo significa que a luz estava verde,comuta para vermelho (activando brevemente o sinal amarelo)
			mudaParaEstado(amarelo);
			retornaStatus();
			mudaParaEstado(vermelho);
		} else
			mudaParaEstado(vermelho); //caso o sinal ja se encontre activo, mantem o sinal vermelho
		tocaSinalSonoro(true);//activa o sinal sonoro
	} else { //comboio nao se encontra no espaco de [-5, 5], sinal estara verde
		if (retornaSinalSonoro()){ //caso o sinal sonoro esteja activo mas o comboio fora do intervalo significa que o sinal devera passar a verde (activando brevemente o amarelo)
			mudaParaEstado(amarelo);
			retornaStatus();
			mudaParaEstado(verde);
		} else
			mudaParaEstado(verde); //caso o sinal NAO se encontre activo, mantem o sinal verde
		tocaSinalSonoro(false); //desactiva o sinal sonoro
	}
	retornaStatus(); //imprime o estado do semaforo
};


