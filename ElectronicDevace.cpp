#include <iostream>
#include "ElectronicDevace.h"


ElectronicDevice::ElectronicDevice():Model("none"), SerialNumber(0){}

ElectronicDevice::ElectronicDevice(string pModel,int pSerialNumber):ElectronicDevice()
   {
        Model = pModel;
        setSerialNumber(pSerialNumber);
   }

ElectronicDevice::ElectronicDevice(ElectronicDevice& obj):Model(obj.Model), SerialNumber(setSerialNumber(obj.SerialNumber)){}

string ElectronicDevice::getModel() const
{
    return Model;
}

int ElectronicDevice::getSerialNumber() const
{
    return SerialNumber;
}

void ElectronicDevice::setModel(string sModel)
{
    Model=sModel;
}

bool ElectronicDevice::setSerialNumber(int sSerialNumber)
{
    if (sSerialNumber<0)
        return false;
    else
        {
        SerialNumber=sSerialNumber;
        return true;
        }
}

void ElectronicDevice::operator=(ElectronicDevice& obj)
{
    Model=obj.Model;
    SerialNumber=obj.SerialNumber;
}
