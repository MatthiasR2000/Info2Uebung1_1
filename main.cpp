#include "Zug.h"

int main() {
    Zug zug1("OOP-Speedster");
    Waggon waggon1(1, 10.5);
    Waggon waggon2(2, 12.0);
    Waggon waggon3(3, 15.5);

    zug1.addWaggon(waggon1);
    zug1.addWaggon(waggon2);
    zug1.addWaggon(waggon3);

    zug1.listWaggons();
    cout << "Durchschnittliche laenge des Zuges: " <<  zug1.durchschnittsLaenge() << endl;
    cout << zug1.findWagNr(3) << endl;
    cout << zug1.findWagNr(4) << endl;
    return 0;
}