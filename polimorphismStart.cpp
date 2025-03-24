#include <iostream>
using namespace std;

class Pojazd {
public:
    virtual void przyspiesz() {
        cout << "Przyspieszono";
    };

};

class Samochod : public Pojazd {
    string x;
public:
    Samochod(string _x){
        x = _x;
    };
    void przyspiesz() {
        cout << "\nSamochodz przyspieszyl o : " << x << "km/h.";
    };
};

class Rower : public Pojazd {
    string y;
public:
    Rower(string _y) {
        y = _y;
    };
    void przyspiesz() {
        cout << "\nRower swieksza predkosc do : " << y << "km/h.";
    };
};

int main()
{
    Pojazd* pojazd1 = new Samochod("25");
    Pojazd* pojazd2 = new Rower("20");

    pojazd1->przyspiesz();
    pojazd2->przyspiesz();

    delete pojazd1;
    delete pojazd2;

    return 0;    
}
