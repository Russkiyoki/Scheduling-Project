#include "../include/Sector.h"

Sector::Sector(string n, string e0, string e1){
    employee0 = e0;
    employee1 = e1;
    sectorName = n;
}

Sector::Sector(string n, string e0){
    employee0 = e0;
    sectorName = n;
}

void Sector::printSectorInfo(){
    cout << sectorName << " ";
}