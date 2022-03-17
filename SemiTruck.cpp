#include "SemiTruck.h"
#include <string>
#include <iostream>

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n)
{
}

SemiTruck::~SemiTruck() = default;

void SemiTruck::pullOver()
{
    std::cout << "Sorry officer, I didn't see the speed limit change..." << std::endl;
}

void SemiTruck::blowAirHorn()
{
    std::cout << "HOOOOOOOOONNNNNNNKKKKK!!!" << std::endl;
}
