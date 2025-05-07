#include "Slots.h"

void Slots::mostrarReglas(){
    cout << "En los slots se daran 3 numeros donde hay bastantes combinaciones que daran distintos resultados.";
    cout << " Si los 3 numeros son 7 se dara mucho mas que lo apostado.";
    cout << " Si los 3 numeros son iguales pero no 7 se dara una buena cantidad mas que lo apostado.";
    cout << " Si los 3 numeros van en escala como por ejemplo 1 2 3 se dara un poco mas que lo apostado.";
    cout << " Cualquier otro caso hara que se pierda lo apostado" << endl;
}


float Slots::jugar(float gonzosApostar) {
    float gonzosResultado;
    srand(time(nullptr));
    int numMaxRandom = 7;
    int numMinRandom = 1;

    cout << "Calculará tres numeros aleatorios del 1 al 6: \n";
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    slot1 = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 7
    slot2 = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 7
    slot3 = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 7
    cout << "Resultado slots: " << slot1 << " " << slot2 << " " << slot3 << endl;
    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}


float Slots::calcularResultado(float gonzosApostar) {
    float maxResult = 2;
    float lowestResult = 1.5;
    float intermediateResult = 7;

    if (slot1 == slot2 && slot2 == slot3) {
        return intermediateResult * gonzosApostar;
    } else if (slot1 == slot2 + 1 && slot2 == slot3 + 1) {
        return lowestResult * gonzosApostar;
    } else if (slot1 == 7 && slot2 == 7 && slot3 == 7) {
        return maxResult * gonzosApostar;
    } else {
        return 0;
    }
}