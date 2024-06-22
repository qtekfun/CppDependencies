#include "common.h"
#include <iostream>

void SharedData::print() const {
    std::cout << "ID: " << id << ", Name: " << name << std::endl;
}
