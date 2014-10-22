#include <iostream>

using namespace std;

bool estaEncendido(int num, int pos)
{
    int mascara = 1;
    mascara = mascara<<pos;
    return num&mascara;
}

int encenderBit(int num, int pos)
{
    int mascara = 1;
    mascara = mascara<<pos;
    return num|mascara;
}

int main()
{
    cout<<encenderBit(9,1);
//    for(int i=8;i>=0;i--)
//        cout<<estaEncendido(9,i);

    return 0;
}
