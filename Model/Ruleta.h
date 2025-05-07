//
// Created by Hewlett Packard on 7/05/2025.
//

#ifndef RULETA_H
#define RULETA_H

#include "Juego.h"
#include<cstdlib>
#include<ctime>



class Ruleta : public Juego {
    protected:
        float calcularResultado(float gonzosApostar) override;
    public:
        ~Ruleta() override = default;
        float jugar(float gonzosApostar) override;
        void mostrarReglas() override;
};



#endif //RULETA_H
