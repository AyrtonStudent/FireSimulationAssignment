//
// Created by ayrto on 08/04/2021.
//

using namespace std;
#include "Burning.h"
#include "Empty.h"
#include <iostream>

Burning::Burning()
{
    icon = 'x';
}

Cell* Burning::doTurn(bool isNeighbourBurning) {

    return new Empty();
}
