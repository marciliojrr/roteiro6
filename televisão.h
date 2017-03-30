#include <iostream>
#ifndef TELEVIS„O_H_INCLUDED
#define TELEVIS„O_H_INCLUDED

using namespace std;

class Televisao {

private:
    int volume, canal;
public:
    void setVolume(int v) {
        if (v == 0) {
            volume++;
        } else {
            volume--;
        }
    }
    void setCanal(int c) {
        if (c == 1) {
            canal++;
        } else {
            canal--;
        }
    }
    int getVolume() {
        return volume;
    }
    int getCanal(){
        return canal;
    }
    Televisao() {
        volume = 0;
        canal = 0;
    }
};
#endif // TELEVIS„O_H_INCLUDED
