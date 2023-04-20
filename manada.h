#include "animal.h"
#include "tiburon.h"
#include <list>
#include <iostream>

using namespace std;

template < typename Tipo >
class Manada {
public:
    void agregarAnimal(string nombre);
    int cantidadDeAnimales();
    void moverAnimales();

private:
    list<Tipo> animales;

};

template < typename Tipo >
void Manada<Tipo>::agregarAnimal(string nombre) {
    Tipo animal(nombre);
    animales.push_back(animal);
}

template < typename Tipo >
int Manada<Tipo>::cantidadDeAnimales() {
    return animales.size();
}

template < typename Tipo>
void Manada<Tipo>::moverAnimales() {
    for (auto i = animales.begin(); i != animales.end(); i++) {
        i->moverse();
    }
}