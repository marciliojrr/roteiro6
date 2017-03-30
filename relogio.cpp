#include <iostream>
#include "clock.h"

int main () {
    int s;

    Relogio horacerta;
    horacerta.setHorario();
    cout << "Segundos para avancar? " <<endl;
    cin >> s;
    for (int i=0; i < s; i++) {
        horacerta.avancarHorario();
    }
    cout << horacerta.getHora() << ":" << horacerta.getMinuto() << ":" << horacerta.getSegundo();
    return 0;
}
