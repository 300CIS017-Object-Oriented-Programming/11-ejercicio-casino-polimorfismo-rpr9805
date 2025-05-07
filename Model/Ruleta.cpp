//
// Created by Hewlett Packard on 7/05/2025.
//

#include "Ruleta.h"

void Ruleta::mostrarReglas(){
    cout << "Se generara un numero aleatorio entre 0 y 36, donde cada numero representa una casilla ",
    cout << "de una ruleta, los numeros del 1 al 36 varian entre negro y rojo y el 0 es el color verde. ";
    cout << "El jugador elegira un color, si acierta ganara, ademas el color que escogio es verde ganara mucho mas, ";
    cout << "sin embargo en el caso de no adivinar perdera todo lo apostado."<<endl;
}



float Ruleta::jugar(float gonzosApostar){
    srand(time(nullptr));
    float gonzosResultado;
    int min = 0, max = 36, numRuleta;

    string colorJug, colorCas;
    cout<<"Elige a que color deseas apostar [rojo/negro/verde]"<<endl;
    cin>>colorJug;

    numRuleta = min + (rand() % (max - min + 1));

    if (numRuleta == min){
        colorCas = "verde";
    } else if (numRuleta >= 1 && numRuleta <= 18){
        colorCas = "rojo";
    }else{
        colorCas = "negro";
    }

   gonzosResultado = calcularResultado(gonzosApostar);
   return gonzosResultado;
}

float Ruleta::calcularResultado(float gonzosApostar){
    float lowestResult = 0, maxResult = 7, midResult = 1.5;

    if(colorCas == colorJug){
        if(colorCas == "verde"){
            return maxResult * gonzosApostar;
        } else{
            return midResult * gonzosApostar;
        }
    }else{
        return lowestResult;
    }
}