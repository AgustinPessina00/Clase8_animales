#include "pez_payaso.h"
#include "tiburon.h"
#include "pelicano.h"
#include "gaviota.h"
#include "manada.h"
#include <iostream>

using namespace std;

int main() {
    PezPayaso pezPayaso("Nemo");
    Tiburon tiburon("Bruce");
    Pelicano pelicano("Nigel");
    Gaviota gaviota("Nohay");

    Manada<PezPayaso> manada;
    manada.agregarAnimal("Marlin");
    manada.agregarAnimal("Coral");
    manada.agregarAnimal("Marlin junior");

    Manada<Gaviota> manadaAves;
    manadaAves.agregarAnimal("Mar");
    manadaAves.agregarAnimal("Cora");
    manadaAves.agregarAnimal("Marl junior");

    manada.moverAnimales();
    manadaAves.moverAnimales();
}