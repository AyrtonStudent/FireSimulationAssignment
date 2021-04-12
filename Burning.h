//
// Created by ayrto on 08/04/2021.
//

#ifndef UNTITLED_BURNING_H
#define UNTITLED_BURNING_H

#include "Cell.h"

class Burning : public Cell
{
public:
    Burning();
    Cell* doTurn(bool isNeighbourBurning) override;
};

#endif //UNTITLED_BURNING_H
