#ifndef SECTOR_H
#define SECTOR_H

#include <string>
using namespace std;

class Sector {
    public:
    string sectorName;
    string employee0;
    string employee1;

    Sector(string n, string e0, string e1);
    Sector(string n, string e0);

    void printSectorInfo();
};
#endif