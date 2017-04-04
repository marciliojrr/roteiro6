#include <iostream>
#include "televisao.h"

using namespace std;

    void Televisao::setVolume(char v) {
        if (v == '+' && getVolume() < 100) {
            volume++;
        }
        else if (v == '-' && getVolume() > 0) {
            volume--;
        }
        else {
            cout << "SELETOR DE CANAIS" << endl << endl;
        }
    }

    void Televisao::setCanal(char c) {
        if (c == '+' && getCanal() < 500) {
            canal++;
        }
        else if (c == '-' && getCanal() > 0) {
            canal--;
        }
        else {
            cout << "Digite o Canal desejado: ";
        }
    }

    void Televisao::setCanal(int c) {
        if (c < 0)
            canal = 0;
        else
            canal = c;
    }

    Televisao::Televisao() {
        volume = 0;
        canal = 0;
    }

int main () {
    char c;
    char v = '1';
    int canal;
    Televisao tvTeste;
    while (v != '0') {
        cout << "Digite + para aumentar o volume" << endl << "Digite - para diminuir o volume" << endl << "Digite '0' para ir ao seletor de canais: " << endl << ">> ";
        //cout << "Digite + para aumentar o volume: ";
        cin >> v;
        tvTeste.setVolume(v);
        cout << "Volume: " << tvTeste.getVolume() << endl;
    }
    while (c != '0') {
        cout << "Digite + para o proximo o canal" << endl << "Digite - para ir ao canal anterior" << endl << "Digite '0' para ir ao seletor de canais" << endl << "'0' para sair" << endl;
        //cout << "Digite + para aumentar o volume: ";
        cin >> c;
        tvTeste.setCanal(c);
        cout << "Canal: " << tvTeste.getCanal() << endl;
        cout << "Volume: " << tvTeste.getVolume() << endl;

    }
    while (canal != 0) {
        cout << "Digite um canal para ir ou '0' para sair" << endl << ">> ";
        cin >> canal;
        tvTeste.setCanal(canal);
        cout << "Canal: " << tvTeste.getCanal() << endl;
        cout << "Volume: " << tvTeste.getVolume() << endl;
    }
}
    /*TESTES DE CODIGO
    cout << "Digite 2 para ir ao proximo canal: ";
    cin >> c;
    tvTeste.setCanal(c);
    cout << "Volume: " << tvTeste.getVolume() << endl << "Canal: " << tvTeste.getCanal() << endl;
    cout << "Digite um canal para ir: ";
    cin >> canal;
    tvTeste.setCanal(canal);
    cout << "Volume: " << tvTeste.getVolume() << endl << "Canal: " << tvTeste.getCanal() << endl;
}*/

