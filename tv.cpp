#include <iostream>
#include "televisão.h"

using namespace std;

int main () {
    int v, c;
    Televisao tvTeste();
    cout << "Digite 1 para aumentar o volume: ";
    cin >> v;
    tvTeste.setVolume();
    cout << "Digite 2 para ir ao proximo canal: ";
    cin >> c;
    tvTeste.setCanal();
    cout << "Volume: " << tvTeste.getVolume() << endl; << "Canal: " << tvTeste.getCanal();
}
