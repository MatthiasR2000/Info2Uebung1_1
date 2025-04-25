//
// Created by Matthias Roos on 24.04.25.
//

#include "Waggon.h"

Waggon::Waggon() {}
Waggon::Waggon(int waggonNr, double length) {
    this->waggonNr = waggonNr;
    this->length = length;
}

void Waggon::printData() const {
    cout << "Waggon Number: " << waggonNr << " Length: " << length << endl;
}

int Waggon::getWaggonNr() const {
    return waggonNr;
}
double Waggon::getLength() const {
    return length;
}