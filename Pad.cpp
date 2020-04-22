#include <iostream>
#include "ElectronicDevace.h"
#include "Pad.h"

Pad::Pad():ElectronicDevice(), Thickness(0){}

Pad::Pad(string pModel,int pSerialNumber,int pThickness):ElectronicDevice(pModel, pSerialNumber)
{
    setThickness(pThickness);
}

Pad::Pad(Pad& obj):ElectronicDevice(obj), Thickness(setThickness(obj.Thickness)){}


void Pad::print() const
{
    cout    << "Information about the Pad:"             <<   endl;
    cout    << "Model - "           <<  Model           <<   endl;
    cout    << "SerialNumber - "    <<  SerialNumber    <<   endl;
    cout    << "Thickness - "       <<  Thickness       <<   endl;
    cout    << "\n\n";
}

int Pad::getThickness() const
{
    return Thickness;
}

bool Pad::setThickness(int sThickness)
{
    if(sThickness<0)
        return false;
    else
        Thickness=sThickness;
        return true;
}

void Pad::operator=(Pad& obj)
{
    setModel(obj.Model);
    setSerialNumber(obj.SerialNumber);
    setThickness(obj.Thickness);
}
