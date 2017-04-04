#ifndef RESTURANTE_H_INCLUDED
#define RESTURANTE_H_INCLUDED
#include "mesa.h"
#define TAM 10
using namespace std;

class Restaurante {
private:
    Mesa mesa[TAM];
    int mesaAtual;
public:
    void adicionaPedido(Pedido, int);
    float calculaTotalRestaurante();
};



#endif // RESTURANTE_H_INCLUDED
