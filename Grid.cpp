//
// Created by ayrto on 08/04/2021.
//
#include <iostream>
#include "Grid.h"
#include "Empty.h"
#include "Burning.h"
#include "Tree.h"

void Grid::populateForest()
{
    for (int row = 0; row < forestSize; row++)
    {
        forest.push_back(std::vector<Cell*>());
        for (int column = 0; column < forestSize; column++)
        {
            if (row == 0 || row == forestSize - 1 || column == 0 || column == forestSize - 1)
            {
                forest [row].push_back(new Empty());
            }
            else if(row == forestSize / 2 && column == forestSize / 2)
            {
                forest [row].push_back(new Burning());
            }
            else
            {
                forest [row].push_back(new Tree());
            }
        }
    }
}

void Grid::print()
{
    for (int row = 0; row < forestSize; row++)
    {
        for (int column = 0; column < forestSize; column++)
        {
            forest [row][column]->printIcon();
        }
        std::cout << std::endl;

        //printout char of each cell, make char
    }
}

void Grid::spreadFire(Grid* otherGrid) {
    for (int row = 1; row < forestSize-1; row++)
    {
        for (int column = 1; column < forestSize-1; column++)
        {
            if (otherGrid->forest [row][column]->isBurning())
            {
                forest [row][column] = new Empty();
            }
            else
            {
                bool neighbourBurning = otherGrid->isNeighbourBurning(row, column);
                Cell* cell = forest [row][column]->doTurn(neighbourBurning);
                forest [row][column] = cell;
            }

            //work out why grid 2 (in main) is outputting incorrectly

        }
    }
}

bool Grid::isNeighbourBurning(int row, int column)
{
    if (forest [row][column+1]->isBurning() ||
        forest [row-1][column]->isBurning() ||
        forest [row][column-1]->isBurning() ||
        forest [row+1][column]->isBurning())
    {
        return true;
    }
    return false;
}