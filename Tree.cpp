//
// Created by ayrto on 06/04/2021.
//
using namespace std;
#include "Tree.h"
#include "Burning.h"
#include <iostream>

Tree::Tree() {
    icon = '&';
}

Cell* Tree::doTurn(bool isNeighbourBurning) {
    if (isNeighbourBurning == true)
    {
        return new Burning();
    }
    return this;
}

