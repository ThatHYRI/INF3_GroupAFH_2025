#ifndef SUSPENSION_H
#define SUSPENSION_H

#include <string>

class Suspension {
protected:
    std::string type;

public:
    Suspension(const std::string& type);
    virtual ~Suspension();
    virtual void showType() const = 0;
};

#endif // SUSPENSION_H
