#ifndef PEZ_PAYASO_H
#define PEZ_PAYASO_H

#include "pez.h"
#include<iostream>

class PezPayaso : public Pez {
public:
    PezPayaso(std::string nombre);

protected:
    void nadar();
};


#endif