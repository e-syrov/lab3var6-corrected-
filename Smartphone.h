#ifndef SMARTPHONE_H_INCLUDED
#define SMARTPHONE_H_INCLUDED

#include <iostream>

using namespace std;

class Smartphone:public ElectronicDevice
{
    private:

        int Screen;

    public:

        Smartphone();
        Smartphone(string pModel,int pSerialNumber,int pScreen);
        Smartphone(Smartphone& obj);

        void print() const override;

        int getScreen() const;

        bool setScreen(int sScreen);

        void operator=(Smartphone& obj);
};

#endif // SMARTPHONE_H_INCLUDED
