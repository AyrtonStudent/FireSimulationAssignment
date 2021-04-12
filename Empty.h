//
// Created by ayrto on 08/04/2021.
//

#ifndef UNTITLED_EMPTY_H
#define UNTITLED_EMPTY_H

#include "Cell.h"

class Empty : public Cell
{
public:
    Empty();
    Cell* doTurn(bool isNeighbourBurning) override;
};

#endif //UNTITLED_EMPTY_H
