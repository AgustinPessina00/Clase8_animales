
#include "gaviota.h"

Gaviota::Gaviota(std::string nombre) : Ave(nombre) {}

void Gaviota::volar() {
    std::cout << "Soy la GAVIOTA " << nombre << " volando" << std::endl;
}
