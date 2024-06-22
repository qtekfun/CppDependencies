#ifndef COMMON_H
#define COMMON_H

#include <string>

struct SharedData {
    int id;
    std::string name;

    SharedData(int id, const std::string& name) : id(id), name(name) {}
    void print() const;
};

#endif // COMMON_H
