//
// Created by Sidney on 27/09/2023.
//

#ifndef C_CALCULATOR_H
#define C_CALCULATOR_H

#include <cstdint>

extern "C" {
    namespace c_calculator {
        void c_whothis();
        int16_t c_add(int16_t x, int16_t y);
        int32_t c_subtract(int32_t x, int32_t y);
        uint32_t c_multiply(uint32_t x, uint32_t y);
    }
}

namespace c_calculator {

void c_whothis();
int16_t c_add(int16_t x, int16_t y);
int32_t c_subtract(int32_t x, int32_t y);
uint32_t c_multiply(uint32_t x, uint32_t y);

}



#endif //C_CALCULATOR_H
