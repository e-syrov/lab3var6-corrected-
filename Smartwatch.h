#ifndef SMARTWATCH_H_INCLUDED
#define SMARTWATCH_H_INCLUDED

#include <iostream>

using namespace std;

class Smartwatch: public ElectronicDevice
{
    private:

        int BatteryCharge;

    public:

        Smartwatch();
        Smartwatch(string pModel,int pSerialNumber, int pBatteryCharge);
        Smartwatch(Smartwatch& obj);

        void print() const override;

        int getBatteryCharge() const;

        bool setBatteryCharge(int sBatteryCharge);

        void operator=(Smartwatch& obj);
};

#endif // SMARTWATCH_H_INCLUDED
