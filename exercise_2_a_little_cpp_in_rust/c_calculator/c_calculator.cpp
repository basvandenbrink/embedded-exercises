//
// Created by Sidney on 27/09/2023.
//

#include <iostream>

#include "c_calculator.h"

extern "C" {
    namespace c_calculator {
        void c_whothis();
        int16_t c_add(int16_t x, int16_t y);
        int32_t c_subtract(int32_t x, int32_t y);
        uint32_t c_multiply(uint32_t x, uint32_t y);
    }
}

namespace c_calculator {

void c_whothis() {
    printf("I am a C calculator!\n");
}

int16_t c_add(int16_t x, int16_t y) {
    return x + y;
}

int32_t c_subtract(int32_t x, int32_t y) {
    return x - y;
}

uint32_t c_multiply(uint32_t x, uint32_t y) {
    return x*y;
}



}