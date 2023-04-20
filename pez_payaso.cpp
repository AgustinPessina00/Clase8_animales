#include "pez_payaso.h"

void PezPayaso::nadar() {
    std::cout << "Soy el PEZ PAYASO " << nombre << " nadando" << std::endl;
}

PezPayaso::PezPayaso(std::string nombre) : Pez(nombre) {}