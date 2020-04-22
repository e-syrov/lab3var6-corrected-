#ifndef NOTEBOOK_H_INCLUDED
#define NOTEBOOK_H_INCLUDED

#include <iostream>

using namespace std;

class Notebook: public ElectronicDevice
{
    private:

        int Size;

    public:

        Notebook();
        Notebook(string pModel,int pSerialNumber, int Size);
        Notebook(Notebook& obj);

        void print() const override;

        int getSize() const;

        bool setSize(int sSize);

        void operator=(Notebook& obj);
};

#endif // NOTEBOOK_H_INCLUDED
