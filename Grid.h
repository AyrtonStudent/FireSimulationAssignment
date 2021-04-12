//
// Created by ayrto on 08/04/2021.
//

#ifndef UNTITLED_GRID_H
#define UNTITLED_GRID_H

#include <vector>

#include "Cell.h"

class Grid {
public:
    std::vector<std::vector<Cell*>>forest;
    int forestSize = 21;
    void populateForest();
    void print();

    void spreadFire(Grid* otherGrid);

    bool isNeighbourBurning(int row, int column);
};


#endif //UNTITLED_GRID_H
