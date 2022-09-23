// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Sep 2022
// This program calculates the area and perimeter of a circle
//    with radius 15mm

#include <cmath>
#include <iostream>

int main() {
    // this function calculates the area and perimeter

    std::cout << "If a circle has a radius of 15mm: " << std::endl;
    std::cout << std::endl;
    std::cout << "Area = πr²";
    std::cout << std::endl;
    std::cout << "Area is " << (round(M_PI * pow(15, 2) * 100) / 100) << "mm².";
    std::cout << std::endl;
    std::cout << "Perimeter = 2πr" << std::endl;
    std::cout << "Perimeter is " << (round(2 * M_PI * 15 * 100) / 100) << "mm.";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
