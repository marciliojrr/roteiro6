#include <iostream>
#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED
using namespace std;

class Relogio {

private:
    int hora, minuto, segundo;

    void setHora (int h) {
        if ((h >= 0) && (h < 24)) {
                hora = h;
        } else {
            hora = 0;
        }
    }
    void setMinuto (int m) {
        if ((m >= 0) && (m < 60)) {
                minuto = m;
        } else {
            minuto = 0;
        }
    }
    void setSegundo (int s) {
        if ((s >= 0) && (s < 60)) {
                segundo = s;
        } else {
            segundo = 0;
        }
    }
public:
    void setHorario () {
        int h, m, s;
        cout << "Hora: ";
        cin >> h;
        setHora(h);
        cout << "Minutos: ";
        cin >> m;
        setMinuto(m);
        cout << "Segundos: ";
        cin >> s;
        setSegundo(s);
    }
    int getHora() {
        return hora;
    }
    int getMinuto(){
        return minuto;
    }
    int getSegundo() {
        return segundo;
    }
    void avancarHorario() {
	if ((segundo == 59) && (minuto == 59) && (hora == 23)) {
		hora = 0;
		minuto = 0;
		segundo = 0;
	}
	if ((segundo == 59) && (minuto == 59) && (hora < 23)) {
		segundo = 0;
		minuto = 0;
		hora++;
	}
	if ((segundo == 59) && (minuto < 59) && (hora < 23)) {
		segundo = 0;
		minuto++;
	} else {
		segundo++;
	}
}
};
#endif // CLOCK_H_INCLUDED
