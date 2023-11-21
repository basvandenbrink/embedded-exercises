//
// Created by Sidney on 27/09/2023.
//

#include "rust_calculator.h"

/*
 * Something something rust?
 */

extern "C"{
    void rust_whothis();
    uint16_t rust_add(uint16_t, uint16_t);
    int32_t rust_subtract(int32_t, int32_t);
    int32_t rust_multiply(int32_t, int32_t);
}

RustCalculator::RustCalculator() {}

void RustCalculator::whothis() {
   rust_whothis();
}

uint16_t RustCalculator::add(uint16_t x, uint16_t y) {
    return rust_add(x, y);
}

int32_t RustCalculator::subtract(int32_t x, int32_t y) {
    return rust_subtract(x, y);
}

uint32_t RustCalculator::multiply(uint32_t x, uint32_t y) {
    return rust_multiply(x, y);
}