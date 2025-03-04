#include <iostream>
#include <string>
#include <time.h>
using namespace std;

const string marki[3] = {"Mercedes", "Renault", "WolksWagon"};

struct park {
    bool zajete;
    string marka;
};

class Parking {
    string nazwa;
    park miejsca[10];

public :

    Parking() {
        cout << "Podaj nazwe parkingu : "; cin >> nazwa;
        for (park& item : miejsca) {
            item.zajete = rand() % 2;
            item.marka = marki[rand() % 3];
        };
    };

    string display() {
        string ret;
        int i = 1;
        ret = "Parking o nazwie : " + nazwa + ". Wykaz miejsc : \n\n";
        for (park item : miejsca) {
            if (item.zajete == true) ret += "Miejsce nr." + to_string(i) + "\nSamochod : " + item.marka + "\n";
            else ret += "Miejscu nr." + to_string(i) + ":\nPuste\n";
            i++;
        };
        return(ret);
    };




};

int main()
{
    srand(time(NULL));
    Parking o1;

    cout << o1.display();
}
