#include <iostream>
#include <iomanip>
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

int main()
{
    human people[7] = {
        {"Gleb", 18, 179, 57, {75, 68, 83}, false},
        {"Foma", 17, 173, 55, {80, 65, 85}, true},
        {"Olga", 18, 162, 50, {85, 63, 91}, false},
        {"Arina", 14, 159, 46, {76, 54, 75}, false},
        {"Grisha", 18, 164, 53, {77, 65, 86}, true},
        {"Pavel", 18, 174, 57, {93, 66, 92}, false},
        {"Maxim", 27, 185, 79, {89, 74, 86}, true}};
    cout << std::setw(15) << "Name"
         << std::setw(15) << "Age"
         << std::setw(15) << "Height"
         << std::setw(15) << "Weight"
         << std::setw(15) << "Chest"
         << std::setw(15) << "Waist"
         << std::setw(15) << "Hip"
         << std::setw(15) << "English" << endl;
    for (int i = 0; i < 7; ++i)
    {
        std::cout << std::setw(15) << people[i].name
                  << std::setw(15) << people[i].age
                  << std::setw(15) << people[i].height
                  << std::setw(15) << people[i].weight
                  << std::setw(15) << people[i].body.chest
                  << std::setw(15) << people[i].body.waist
                  << std::setw(15) << people[i].body.hip
                  << std::setw(15) << (people[i].knowsEnglish ? "yes" : "no") << std::endl;
    }

    return 0;
}