#include <iostream>
#include <string>
using namespace std;

struct params
{
    int chest;
    
    int waist;
    int hip;
};

struct human
{
    std::string name;
    unsigned age;
    unsigned height;
    unsigned weight;
    params body;
    bool knowsEnglish;
};