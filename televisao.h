#include <iostream>
#ifndef TELEVISAO_H_INCLUDED
#define TELEVISAO_H_INCLUDED

using namespace std;

class Televisao {

private:
    int volume, canal;
public:
    void setVolume(char v);
    void setCanal(char c);
    void setCanal(int c);
    int getVolume() { return volume; }
    int getCanal(){ return canal; }
    Televisao();
};
#endif // TELEVIS„O_H_INCLUDED
