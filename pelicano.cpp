
#include "pelicano.h"

Pelicano::Pelicano(std::string nombre) : Ave(nombre) {}

void Pelicano::volar() {
    std::cout << "Soy el PELICANO " << nombre << " volando" << std::endl;
}
