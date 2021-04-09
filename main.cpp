using namespace std;
#include <iostream>
#include <vector>
#include "Grid.h"

/*
Each cell should have a char variable, see if you can cout that variable of each cell in the grid
I had a crack at the whole solution yesterday btw, there's a couple things we should go through.
 But have a look at this https://www.w3schools.com/cpp/cpp_pointers.asp and see if you can familiarise
 yourself a bit more with pointers and references too snd instead of having the array of Cells for the grid,
 I think that we should have a std::vector<Cell*>. This syntax just reads as a vector of type Cell pointer.
 A vector is very similar to an array, but works more like a stack. You can add things to it by using
 grid.push_back(new Cell()), so that you can test your print method (Don't worry if you struggle with
 pointers, it's a big thing to understand for a lot of programmers)
*/




int main()
{

    Grid* grid = new Grid();
    grid->populateForest();
    grid->print();

    grid->spreadFire();

    return 0;


}

//move all classes like *cell* into .cpp and .h files untitled>C++ class>