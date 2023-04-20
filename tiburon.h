#ifndef TIBURON_H
#define TIBURON_H

#include "pez.h"

class Tiburon : public Pez {
public:
    Tiburon(std::string nombre);

protected:
    void nadar();
};

#endif