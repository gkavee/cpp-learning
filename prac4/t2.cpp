#include <iostream>
#include <string>

using namespace std;

struct ZNAK
{
    string NAME;
    string ZODIAC;
    int BDAY[3];
};

int main()
{
    ZNAK example;
    example.NAME = "Ekaterina";
    example.ZODIAC = "Scorpio";
    example.BDAY[0] = 4;
    example.BDAY[1] = 11;
    example.BDAY[2] = 2004;

    cout << example.NAME << endl;
    cout << example.ZODIAC << endl;
    cout << example.BDAY[0] << ".";
    cout << example.BDAY[1] << ".";
    cout << example.BDAY[2];

    return 0;
}