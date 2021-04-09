//
// Created by ayrto on 06/04/2021.
//

#ifndef UNTITLED_CELL_H
#define UNTITLED_CELL_H


class Cell
{
public:
    int xCoordinate;
    int yCoordinate;
    char icon = 'C';
    void printIcon();

virtual void doTurn(bool isNeighbourBurning)=0;

    bool isBurning();
};



#endif //UNTITLED_CELL_H
