// Copyright (c) 2021 Liam Csiffary All rights reserved.
//
// Created by: Liam Csiffary
// Date: May 28, 2021
// This program displays way to many numbers

#include <iostream>
#include <cmath>

// main functon
int main() {
    // set counters to 0 and define them
    int counterRed = 0;
    int counterGreen = 0;
    int counterBlue = 0;

    // make the for loops, this does all the stuff
    for (counterRed = 0; counterRed < 256; counterRed++) {
        for (counterGreen = 0; counterGreen < 256; counterGreen++) {
            for (counterBlue = 0; counterBlue < 256; counterBlue++) {
                std::cout << counterRed << ", " <<
                counterGreen << ", " << counterBlue << "\n";
            }
        }
    }
}
