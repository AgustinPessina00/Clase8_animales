#include "pez.h"

Pez::Pez(std::string nombre) : Animal(nombre) {}

void Pez::moverse() {
    nadar();
}
