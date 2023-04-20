#include "ave.h"

Ave::Ave(std::string nombre) : Animal(nombre) {}

void Ave::moverse() {
    volar();
}
