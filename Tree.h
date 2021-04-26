//
// Created by ayrto on 08/04/2021.
//

#ifndef UNTITLED_TREE_H
#define UNTITLED_TREE_H

#include "Cell.h"

class Tree : public Cell
{
public:
    Tree();
    Cell* doTurn(bool isNeighbourBurning) override;

    bool fiftyPercent();
};

#endif //UNTITLED_TREE_H

