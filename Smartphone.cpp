#include <iostream>
#include "ElectronicDevace.h"
#include "Smartphone.h"

Smartphone::Smartphone():ElectronicDevice(), Screen(0){}

Smartphone::Smartphone(string pModel,int pSerialNumber,int pScreen):ElectronicDevice(pModel, pSerialNumber)
{
    setScreen(pScreen);
}

Smartphone::Smartphone(Smartphone& obj):ElectronicDevice(obj), Screen(setScreen(obj.Screen)){}


void Smartphone::print() const
{
    cout    << "Information about the Smartphone:"      <<   endl;
    cout    << "Model - "           <<  Model           <<   endl;
    cout    << "SerialNumber - "    <<  SerialNumber    <<   endl;
    cout    << "Screen - "          <<  Screen          <<   endl;
    cout    << "\n\n";
}

int Smartphone::getScreen() const
{
    return Screen;
}

bool Smartphone::setScreen(int sScreen)
{
    if(sScreen<0)
        return false;
    else
        Screen=sScreen;
        return true;
}

void Smartphone::operator=(Smartphone& obj)
{
    setModel(obj.Model);
    setSerialNumber(obj.SerialNumber);
    setScreen(obj.Screen);
}
