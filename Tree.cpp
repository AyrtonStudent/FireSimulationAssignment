//
// Created by ayrto on 06/04/2021.
//
using namespace std;
#include "Tree.h"
#include "Burning.h"
#include <iostream>
#include <random>
#include <ctime>

Tree::Tree() {
    icon = '&';
}

Cell* Tree::doTurn(bool isNeighbourBurning) {
    if (isNeighbourBurning == true && fiftyPercent() == true)
    {
        delete this;
        return new Burning();
    }
    return this;
}

bool Tree::fiftyPercent()
{
    std::random_device seed;
    std::mt19937 randomNumberGenerator(seed());
    std::uniform_real_distribution<double>dist(0.0, 2.0);

    return dist (randomNumberGenerator) > 1;
}

