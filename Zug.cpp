//
// Created by Matthias Roos on 24.04.25.
//

#include "Zug.h"

Zug::Zug(string name) {
    this->name = name;
    this->anzahlWaggons = 0;
}

void Zug::addWaggon(const Waggon& waggon) {
    if (anzahlWaggons < MAX_WAGGONS) {
        this->waggons[this->anzahlWaggons] = waggon;
        this->anzahlWaggons++;
    } else {
        cout << "Cannot add waggon: Maximum capacity reached!" << endl;
    }
}


void Zug::addWaggonVector(const Waggon& waggon) {
    if (anzahlWaggons < MAX_WAGGONS) {
        waggons2.push_back(waggon);
        this->anzahlWaggons++;
    } else {
        cout << "Cannot add waggon: Maximum capacity reached!" << endl;
    }
}

void Zug::listWaggons() const {
    for (int i = 0; i < anzahlWaggons; ++i) {
        waggons[i].printData();
    }
}

void Zug::listWaggonsVector() const {
    for (int i = 0; i < waggons2.size(); ++i) {
        waggons2[i].printData();
    }
}

double Zug::durchschnittsLaenge() const {
    double temp = 0;
    for (int i = 0; i < this->anzahlWaggons; ++i) {
        temp += this->waggons[i].getLength();
    }
    return (temp/anzahlWaggons);
}

bool Zug::findWagNr(int waggonNr) const {
    bool gefunden = false;
    for (int i = 0; i < this->anzahlWaggons; i++) {
        if(this->waggons[i].getWaggonNr() == waggonNr) {
            gefunden = true;
        }
    }
    return gefunden;
}

double Zug::longestTrain() const {
    if (anzahlWaggons == 0) {
        return 0.0;
    }
    double maxLength = waggons[0].getLength();
    for (int i = 1; i < anzahlWaggons; i++) {
        if (waggons[i].getLength() > maxLength) {
            maxLength = waggons[i].getLength();
        }
    }
    return maxLength;
}

double Zug::shortestTrain() const {

    if (anzahlWaggons == 0) {
        return 0.0;
    }
    double maxLength = waggons[0].getLength();
    for (int i = 1; i < anzahlWaggons; i++) {
        if (waggons[i].getLength() < maxLength) {
            maxLength = waggons[i].getLength();
        }
    }
    return maxLength;
}