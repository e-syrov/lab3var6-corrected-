#ifndef PAD_H_INCLUDED
#define PAD_H_INCLUDED

#include <iostream>

using namespace std;

class Pad: public ElectronicDevice
{
    private:

        int Thickness;

    public:

        Pad();
        Pad(string pModel,int pSerialNumber, int pThickness);
        Pad(Pad& obj);

        void print() const override;

        int getThickness() const;

        bool setThickness(int sThickness);

        void operator=(Pad& obj);

};

#endif // PAD_H_INCLUDED
