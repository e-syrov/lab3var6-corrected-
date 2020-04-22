#include <iostream>
#include "ElectronicDevace.h"
#include "Notebook.h"

Notebook::Notebook():ElectronicDevice(), Size(0){}

Notebook::Notebook(string pModel,int pSerialNumber,int pSize):ElectronicDevice(pModel, pSerialNumber)
{
    setSize(pSize);
}

Notebook::Notebook(Notebook& obj):ElectronicDevice(obj), Size(setSize(obj.Size)){}


void Notebook::print() const
{
    cout    << "Information about the Notebook:"        <<   endl;
    cout    << "Model - "           <<  Model           <<   endl;
    cout    << "SerialNumber - "    <<  SerialNumber    <<   endl;
    cout    << "Size - "            <<  Size            <<   endl;
    cout    << "\n\n";
}

int Notebook::getSize() const
{
    return Size;
}

bool Notebook::setSize(int sSize)
{
    if(sSize<0)
        return false;
    else
        Size=sSize;
        return true;
}

void Notebook::operator=(Notebook& obj)
{
    setModel(obj.Model);
    setSerialNumber(obj.SerialNumber);
    setSize(obj.Size);
}
