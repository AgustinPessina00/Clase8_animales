#ifndef AVE_H
#define AVE_H

#include "animal.h"

class Ave: public Animal {
public:
    void moverse();
    Ave(std::string nombre);

protected:
    virtual void volar() = 0;
};

#endif