#include "Zug.h"

int main() {
    Zug zug1("OOP-Speedster");
    Zug zug2("Vector");
    Waggon waggon1(1, 10.5);
    Waggon waggon2(2, 12.0);
    Waggon waggon3(3, 15.5);

    zug1.addWaggon(waggon1);
    zug1.addWaggon(waggon2);
    zug1.addWaggon(waggon3);
    zug2.addWaggonVector(waggon1);
    zug2.addWaggonVector(waggon2);
    zug2.addWaggonVector(waggon3);
    zug1.listWaggons();
    cout << "Zug2: " << endl;
    zug2.listWaggonsVector();
    cout << "Average length of train: " <<  zug1.durchschnittsLaenge() << endl;
    cout << zug1.findWagNr(3) << endl;
    cout << zug1.findWagNr(4) << endl;
    cout << "Longest train is: " << zug1.longestTrain() << endl;
    cout << "Shortest train is: " << zug1.shortestTrain() << endl;
    return 0;
}