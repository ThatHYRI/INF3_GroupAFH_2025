#ifndef ELECTRIC_H
#define ELECTRIC_H

#include "Engine.h"

class Electric : public Engine {
public:
    Electric();
    void showType() const override;
};

#endif // ELECTRIC_H
