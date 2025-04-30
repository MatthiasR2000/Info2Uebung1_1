//
// Created by Matthias Roos on 24.04.25.
//

#ifndef ZUG_H
#define ZUG_H
#include "Waggon.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Zug {
private:
    static const int MAX_WAGGONS = 5;
    string name;
    Waggon waggons[MAX_WAGGONS];
    int anzahlWaggons;
    vector<Waggon> waggons2;
public:
    Zug(string name);
    void addWaggon(const Waggon& waggon);
    void addWaggonVector(const Waggon& waggon);
    void listWaggons() const;
    void listWaggonsVector() const;
    double durchschnittsLaenge() const;
    bool findWagNr(int waggonNr) const;
    double longestTrain() const;
    double shortestTrain() const;
};

#endif //ZUG_H
