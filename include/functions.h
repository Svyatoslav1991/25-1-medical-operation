#pragma once

#include <iostream>
#include <limits>
#include <vector>

#include "point.h"

//variable value input function
template <typename T>
T myCin() noexcept
{
    bool good = true;

    T variable;

    do
    {
        std::cout << "Enter the value of the variable: ";
        std::cin >> variable;

        good = std::cin.good();

        if (!good)
        {
            std::cout << "You entered something wrong\n";
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } while (!good);

    return variable;
}



//cutting
void scalpel(const Point& p1, const Point& p2) noexcept;

//clamp
void hemostat(const Point& p) noexcept;

//tweezers 
void tweezers(const Point& p) noexcept;

//seam
void suture(const Point& p1, const Point& p2) noexcept;

//Checking double point numbers for equality
bool isEqual(double a, double b) noexcept;