#ifndef GAVIOTA_H
#define GAVIOTA_H

#include "ave.h"

class Pelicano : public Ave {
public:
    Pelicano(std::string nombre);

protected:
    void volar();
};

#endif