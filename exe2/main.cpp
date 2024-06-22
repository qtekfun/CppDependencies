#include <iostream>
#include "common.h"

int main() {
    SharedData data(2, "Executable 2");
    data.print();
    return 0;
}
