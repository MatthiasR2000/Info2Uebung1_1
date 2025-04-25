//
// Created by Matthias Roos on 24.04.25.
//

#ifndef WAGGON_H
#define WAGGON_H
#include <string>
#include <iostream>
using namespace std;

class Waggon {
private:
    int waggonNr;
    double length;
public:
    Waggon();//Sehr wichtig da in Zug ein array des Typs Zug definiert ist ohne kommt ein Linker fehler
    Waggon(int waggonNr, double length);
    void printData() const;
    int getWaggonNr() const;
    double getLength() const;
};
#endif //WAGGON_H