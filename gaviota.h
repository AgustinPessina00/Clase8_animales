#ifndef AGUILA_H
#define AGUILA_H

#include "ave.h"

class Gaviota : public Ave {
public:
    Gaviota(std::string nombre);

protected:
    void volar();
};


#endif