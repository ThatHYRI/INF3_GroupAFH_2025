#ifndef ENGINE_H
#define ENGINE_H

#include <string>

class Engine {
protected:
    std::string type;

public:
    Engine(const std::string& type);
    virtual ~Engine();
    virtual void showType() const = 0;
};

#endif // ENGINE_H
