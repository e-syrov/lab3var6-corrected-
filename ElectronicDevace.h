#ifndef ELECTTONICDEVICE_H_INCLUDED
#define ELECTTONICDEVICE_H_INCLUDED

#include <iostream>

using namespace std;

class ElectronicDevice
{
    protected:

        string Model;
        int SerialNumber;

    public:

        ElectronicDevice();
        ElectronicDevice(string pModel,int pSerialNumber);
        ElectronicDevice(ElectronicDevice& obj);

        virtual void print() const = 0;

        string getModel() const;
        int getSerialNumber() const;

        void setModel(string sModel);

        bool setSerialNumber(int sSerialNumber);

        void operator=(ElectronicDevice& obj);

};

#endif // HELLO_H_INCLUDED
