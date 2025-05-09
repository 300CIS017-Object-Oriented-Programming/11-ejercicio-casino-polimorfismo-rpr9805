//
// Created by lufe0 on 8/05/2021.
//

#include "DosColores.h"


void DosColores::mostrarReglas()
{
    cout << "Este juego tiene su base en 2 partes. Primero se tiene un dado de 6 caras que se lanzara y dara un numero aleatorio";
    cout << "Luego el casino dara un color entre blanco y negro, ya con esto se determinara el resultado";
    cout << "Si ambos son iguales al del casino se ganara bastante mas que lo apostado";
    cout << "Si solo se adivina el numero del dado se gana un poco mas de lo apostado";
    cout << "Si solo se adivina el color se deja el saldo neutral, pero si no se adivina ninguna se perdera lo apostado" <<endl;
}


float DosColores::jugar(float gonzosApostar) {
    float gonzosResultado;
    srand(time(nullptr));
    int numMaxRandom = 7;
    int numMinRandom = 1;
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    numeroJugador = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    numeroCasino = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    colorCasino = rand() % 2; // Numero entre 0 y 1
    cout << "Tu numero aleatorio es: " << numeroJugador << endl;
    cout << "Elije un color: " << endl;
    cout << "1. Blanco" << endl;
    cout << "2. Negro" << endl;
    cin >> colorJugador;
    --colorJugador; // Se ajusta el valor del color
    cout << "Numero casino: " << numeroCasino << endl;
    cout << "Color casino: ";
    if (colorCasino == 0) {
        cout << "Blanco." << endl;
    } else {
        cout << "Negro." << endl;
    }
    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float DosColores::calcularResultado(float gonzosApostar) {
    float lowestResult = 0;
    float maxResult = 4;
    float midResult = 1.5;

    // Si coincide tanto el valor del dado como el color, el usuario ganará 4 veces lo apostado
    if (numeroJugador == numeroCasino && colorJugador == colorCasino) {
        return maxResult * gonzosApostar;
    }
        // coincide sólo con el valor del dado ganará 0.5 veces lo apostado
    else if (numeroJugador == numeroCasino) {
        return midResult * gonzosApostar;
    }
        // no gana ni pierde
    else if (colorJugador == colorCasino) {
        return gonzosApostar;
    }
        // pierde lo apostado
    else {
        return lowestResult;
    }
}
/* Como el constructor se definio por defecto no hay que poner constructo vacio
DosColores::~DosColores() {

}
*/