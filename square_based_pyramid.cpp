// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on November 27 2020
// this program calculates the volume of a square based pyramid

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    // this program calculates the volume of a square based pyramid
    float base_edge;
    float height;
    double volume;


    // input
    std::cout << "Enter the base edge of square based pyramid:";
    std::cin >> base_edge;
    std::cout << "Enter the height of square based pyramid:";
    std::cin >> height;


    // process
    volume = pow(base_edge, 2) * (height * 1/3);


    // output
    std::cout << "" << std::endl;
    std::cout << "The volume is: " << volume <<"cm3" << std::fixed
              << std::setprecision(2) << std::endl;
}
