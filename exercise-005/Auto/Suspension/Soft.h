#ifndef SOFT_H
#define SOFT_H

#include "Suspension.h"

class Soft : public Suspension {
public:
    Soft();
    void showType() const override;
};

#endif // SOFT_H
