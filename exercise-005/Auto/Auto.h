#ifndef AUTO_H
#define AUTO_H

#include <string>

class Auto {
protected:
    std::string name;

public:
    Auto(const std::string& name);
    virtual ~Auto();
    virtual void displayInfo() const = 0; // Rein virtuelle Methode
};

#endif // AUTO_H
