#include <iostream>
#include "ElectronicDevace.h"
#include "Smartphone.h"
#include "Notebook.h"
#include "Pad.h"
#include "Smartwatch.h"

using namespace std;

int main()
{

ElectronicDevice* array[4];

array[0]=new Smartphone();
array[1]=new Notebook("Lenovo", 2, 7);
array[2]=new Pad("Apple", 4, 4);
array[3]=new Smartwatch();

for(int i=0; i<4; i++)
    {
    array[i]->print();
    }

return 0;
}
