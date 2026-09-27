// Copyright (c) 2026 Kaylee R All rights reserved.
// .
// Created by: Kaylee R
// Date: September 26 2026
// This program asks for radius
// of a circle, calculates and displays the circumference
// back to the user in proper units.
#include <iostream>

int main() {
    // declare constants
    const float TAU = 6.28;

    // declare variables
    float radius, circumference;
    // get the radius from the user
    std::cout <<"Enter the radius of the circle (mm): ";
    std::cin >> radius;

    // calculate the circumference using Tau
    circumference = TAU * radius;

    // display the circumference to the user
    std::cout <<"Circumference = " << circumference << "mm" << "\n";
}
