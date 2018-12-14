//============================================================================
// Name        : eFolioB.cpp
// Author      : rui romao
// Version     :
// Copyright   : 
//============================================================================

#include <iostream>
#include "SemaforoRodoviario.h"
#include "SemaforoFerroviario.h"

using namespace std;

int main() {

	//Cria os objectos Semaforos e incializa-os por defeito de acordo com o enunciado
	//Semaforo Rodoviario - inicializado desactivado
	SemaforoRodoviario semaforo_rodoviario;
	//Semaforo Ferroviario - inicializado activado
	SemaforoFerroviario semaforo_ferroviario;
	signed int distancia_comboio;

	//Codigo de teste do Semaforo Ferroviario
	//Cria um "comboio virtual e fa-lo percorrer uma distancia de 20km em intervalos de 1 segundo
	distancia_comboio = 10;
	do{
		cout << "O comboio esta a: " << distancia_comboio << "km" << endl;
		semaforo_ferroviario.mudaEstadoAuto(distancia_comboio);
		this_thread::sleep_for(chrono::seconds(1));
		--distancia_comboio;
	} while(distancia_comboio !=11);


	//Codigo de teste do Semaforo Rodoviario
	//Depois de inicializado na sua criacao, percorre automaticamente os estados
	do{
		semaforo_rodoviario.mudaEstadoAuto();
	} while (true);

	cout << "Adeus";

	return 0;
}
