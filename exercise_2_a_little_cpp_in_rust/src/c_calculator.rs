use super::calculator::Calculator;

pub struct CCalculator;

extern "C" {
    pub fn c_whothis();
    pub fn c_add(x: i16, y: i16) -> i16;
    pub fn c_subtract(x: i32, y: i32) -> i32;
    pub fn c_multiply(x: u32, y: u32) -> u32;
}

/*
 * Something something C?
 * Make sure to define all functions you want to use!
 */

impl Calculator for CCalculator {
    fn whothis(&self) {
        unsafe { c_whothis() };
    }
    fn add(&self, x: i16, y: i16) -> i16 {
        unsafe { c_add(x, y)}
    }

    fn subtract(&self, x: i32, y: i32) -> i32 {
       unsafe { c_subtract(x, y)}
    }

    fn multiply(&self, x: u32, y: u32) -> u32 {
        unsafe { c_multiply(x, y)}
    }
}