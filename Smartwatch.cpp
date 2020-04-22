#include <iostream>
#include "ElectronicDevace.h"
#include "Smartwatch.h"

Smartwatch::Smartwatch():ElectronicDevice(), BatteryCharge(0){}

Smartwatch::Smartwatch(string pModel,int pSerialNumber,int pBatteryCharge):ElectronicDevice(pModel, pSerialNumber)
{
    setBatteryCharge(pBatteryCharge);
}

Smartwatch::Smartwatch(Smartwatch& obj):ElectronicDevice(obj), BatteryCharge(setBatteryCharge(obj.BatteryCharge)){}


void Smartwatch::print() const
{
    cout    << "Information about the Smartwatch:"          <<   endl;
    cout    << "Model - "           <<  Model               <<   endl;
    cout    << "SerialNumber - "    <<  SerialNumber        <<   endl;
    cout    << "BatteryCharge - "   <<  BatteryCharge       <<   endl;
    cout    << "\n\n";
}

int Smartwatch::getBatteryCharge() const
{
    return BatteryCharge;
}

bool Smartwatch::setBatteryCharge(int sBatteryCharge)
{
    if(sBatteryCharge<0)
        return false;
    else
        BatteryCharge=sBatteryCharge;
        return true;
}

void Smartwatch::operator=(Smartwatch& obj)
{
    setModel(obj.Model);
    setSerialNumber(obj.SerialNumber);
    setBatteryCharge(obj.BatteryCharge);
}
