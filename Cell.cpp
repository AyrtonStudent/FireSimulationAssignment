//
// Created by ayrto on 06/04/2021.
//
using namespace std;
#include "Cell.h"
#include <iostream>

void Cell::printIcon()
{
    cout << icon;
}

bool Cell::isBurning() {
    if (icon == 'x')
    {
        return true;
    }
    else
    {
        return false;
    }
}

