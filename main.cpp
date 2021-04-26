using namespace std;
#include <iostream>
#include <vector>
#include "Grid.h"

/* 2 Grids are being utilised to pass the data between each them to get the lastest information relevant to them.
 * This is done as to not effect the current spread of fire.*/

Grid* grid1 = new Grid();
Grid* grid2 = new Grid();

void spreadFire (bool isGrid1)
{
    if (isGrid1 == true)
    {
        grid1->spreadFire(grid2);
        grid1->print();
    }
    else
    {
        grid2->spreadFire(grid1);
        grid2->print();
    }

}

int main()
{
    string output1 = "Grid 1:";
    string output2 = "Grid 2:";

    cout << output1;
    grid1->populateForest();
    grid2->populateForest();

    grid1->print();

    bool isGrid1 = true;
    while (true)
    {
        string userInput;
        cin >> userInput;
        if (userInput == "q")
            break;
        spreadFire(isGrid1);
        isGrid1 = !isGrid1;
    }
    return 0;
}


//move all classes like *cell* into .cpp and .h files untitled>C++ class>